#include <DX3D/engine/dx3dEngine.h>
#include <Windows.h>

void dx3d::engine::run()
{
    MSG message{};
    while (m_isRunning)
    {
        while (PeekMessage(&message, NULL, 0, 0, PM_REMOVE))
        {
            if (message.message == WM_QUIT) {
                m_isRunning = false;
                break;
            }

            TranslateMessage(&message);
            DispatchMessage(&message);
        }
        Sleep(1);
    }
}
