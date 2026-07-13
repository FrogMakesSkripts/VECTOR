#pragma once
#include <DX3D/core/common.h>
#include <DX3D/core/base.h>
#include <d3d11.h>
#include <wrl.h>

namespace dx3d
{
    class renderSystem final : public base
    {
    public:
        explicit renderSystem(const renderSystemDescriptor& descriptor);
        virtual ~renderSystem() override;
    private:
        Microsoft::WRL::ComPtr<ID3D11Device> m_d3dDevice{};
        Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_d3dContext{};
    };
}
