#include <DX3D/graphics/renderSystem.h>
#include <DX3D/graphics/graphicsLogUtils.h>
#include <DX3D/graphics/swapChain.h>

dx3d::renderSystem::renderSystem(const renderSystemDescriptor& descriptor) : base(descriptor.base)
{
    D3D_FEATURE_LEVEL featureLevel{};
    UINT createDeviceFlags{};

#ifdef _DEBUG
    createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

    DX3DGraphicsLogErrorAndThrow(D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, NULL, 0, D3D11_SDK_VERSION,
        &m_d3dDevice, &featureLevel, &m_d3dContext), "Direct3D11 initialization failed.");

    DX3DGraphicsLogErrorAndThrow(m_d3dDevice -> QueryInterface(IID_PPV_ARGS(&m_dxgiDevice)), 
        "QueryInterface failed to retrieve IDXGIDevice.");
    
    DX3DGraphicsLogErrorAndThrow(m_dxgiDevice -> GetParent(IID_PPV_ARGS(&m_dxgiAdapter)), 
        "GetParent failed to retrieve IDXGIAdapter.");
    
    DX3DGraphicsLogErrorAndThrow(m_dxgiAdapter -> GetParent(IID_PPV_ARGS(&m_dxgiFactory)), 
        "GetParent failed to retrieve IDXGIFactory.");

}

dx3d::renderSystem::~renderSystem()
{
}

dx3d::SwapChainPtr dx3d::renderSystem::createSwapChain(const swapChainDescriptor &descriptor) const
{
    return std::make_shared<swapChain>(descriptor, getGraphicsResourceDescriptor());
}

dx3d::graphicsResourceDescriptor dx3d::renderSystem::getGraphicsResourceDescriptor() const noexcept
{
    return {{m_logger}, shared_from_this(), *m_d3dDevice.Get(), *m_dxgiFactory.Get()};
}
