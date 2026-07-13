#pragma once
#include <DX3D/graphics/graphicsResource.h>

namespace dx3d
{
    class swapChain final : public graphicsResource
    {
    public:
        swapChain(const swapChainDescriptor& descriptor, const graphicsResourceDescriptor& graphicsDescriptor);
    
    private:
        Microsoft::WRL::ComPtr<IDXGISwapChain> m_swapChain{};
    };
}
