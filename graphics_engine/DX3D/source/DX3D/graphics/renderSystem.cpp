#include <DX3D/graphics/renderSystem.h>
#include <DX3D/graphics/graphicsLogUtils.h>

dx3d::renderSystem::renderSystem(const renderSystemDescriptor& descriptor) : base(descriptor.base)
{
    D3D_FEATURE_LEVEL featureLevel{};
    UINT createDeviceFlags{};

#ifdef _DEBUG
    createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

    auto hardware = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, NULL, 0, D3D11_SDK_VERSION,
        &m_d3dDevice, &featureLevel, &m_d3dContext);

    if (FAILED(hardware)) { DX3DGraphicsLogErrorAndThrow(hardware, "Direct3D11 initialization failed."); }
}

dx3d::renderSystem::~renderSystem()
{
}
