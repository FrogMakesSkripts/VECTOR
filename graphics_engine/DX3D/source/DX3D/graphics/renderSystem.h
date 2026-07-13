#pragma once
#include <DX3D/graphics/graphicsResource.h>
#include <DX3D/core/common.h>
#include <DX3D/core/base.h>
#include <d3d11.h>
#include <wrl.h>

namespace dx3d
{
    class renderSystem final : public base, public std::enable_shared_from_this<renderSystem>
    {
    public:
        explicit renderSystem(const renderSystemDescriptor& descriptor);
        virtual ~renderSystem() override;

        SwapChainPtr createSwapChain(const swapChainDescriptor& descriptor) const;
    private:
        graphicsResourceDescriptor getGraphicsResourceDescriptor() const noexcept;
    private:
        Microsoft::WRL::ComPtr<ID3D11Device> m_d3dDevice{};
        Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_d3dContext{};
        Microsoft::WRL::ComPtr<IDXGIDevice> m_dxgiDevice{};
        Microsoft::WRL::ComPtr<IDXGIAdapter> m_dxgiAdapter{};
        Microsoft::WRL::ComPtr<IDXGIFactory> m_dxgiFactory{};
    };
}
