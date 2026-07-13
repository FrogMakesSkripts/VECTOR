#pragma once
#include <DX3D/window/window.h>

namespace dx3d
{
    class display final : public window
    {
    public:
        explicit display(const displayDescriptor& descriptor);
    
    private:
        SwapChainPtr m_swapChain{};
    };
}
