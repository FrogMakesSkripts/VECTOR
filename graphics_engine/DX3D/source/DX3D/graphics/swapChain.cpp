#include <DX3D/graphics/swapChain.h>

dx3d::swapChain::swapChain(const swapChainDescriptor& descriptor, const graphicsResourceDescriptor& graphicsDescriptor) :
    graphicsResource(graphicsDescriptor)
{
    DXGI_SWAP_CHAIN_DESC dxgiDescriptor{};

    dxgiDescriptor.BufferDesc.Width = std::max(1, descriptor.windowSize.width);
    dxgiDescriptor.BufferDesc.Height = std::max(1, descriptor.windowSize.height);
    dxgiDescriptor.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    dxgiDescriptor.BufferCount = 2;
    dxgiDescriptor.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    
    dxgiDescriptor.OutputWindow = static_cast<HWND>(descriptor.windowHandle);
    dxgiDescriptor.SampleDesc.Count = 1;
    dxgiDescriptor.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
    dxgiDescriptor.Windowed = TRUE;

    DX3DGraphicsLogErrorAndThrow(m_factory.CreateSwapChain(&m_device, &dxgiDescriptor, &m_swapChain),
        "CreateSwapChain failed.");
}
