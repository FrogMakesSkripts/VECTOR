#include <DX3D/window/window.h>
#include <Windows.h>
#include <stdexcept>
#include <functional>

static LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
    switch(msg)
    {
        case (WM_CLOSE):
            PostQuitMessage(0);
            break;
    default:
        return DefWindowProc(hwnd, msg, wparam, lparam);
    }
    return 0;
}

dx3d::window::window(const windowDescriptor& descriptor) : base(descriptor.base), m_size(descriptor.size)
{
    auto registerWindowClassFunction = []() {
                WNDCLASSEX window{};
                window.cbSize = sizeof(WNDCLASSEX);
                window.lpszClassName = L"DX3DWindow";
                window.lpfnWndProc = &WindowProcedure;
                return RegisterClassEx(&window);
        };

    static const auto windowClassId = std::invoke(registerWindowClassFunction);

    if (!windowClassId) { DX3DLogErrorAndThrow("RegisterClassEx failed."); }
    
    RECT rectangle{0, 0, m_size.width, m_size.height};
    AdjustWindowRect(&rectangle, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, false);

    m_handle = CreateWindowEx(0, MAKEINTATOM(windowClassId), L"V.E.C.T.O.R AI World Simulation",
        WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, CW_USEDEFAULT, CW_USEDEFAULT,
        rectangle.right - rectangle.left, rectangle.bottom - rectangle.top,
        NULL, NULL, NULL, NULL
    );

    if (!m_handle) { DX3DLogErrorAndThrow("CreateWindowEx failed."); }

    ShowWindow(static_cast<HWND>(m_handle), SW_SHOW);
}

dx3d::window::~window()
{
    DestroyWindow(static_cast<HWND>(m_handle));
}
