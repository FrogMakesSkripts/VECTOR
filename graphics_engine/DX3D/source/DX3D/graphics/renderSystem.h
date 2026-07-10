#pragma once
#include <DX3D/core/core.h>
#include <DX3D/core/base.h>
#include <d3d11.h>
#include <wrl.h>

namespace dx3d
{
    class renderSystem final : public base
    {
    public:
        renderSystem();
        virtual ~renderSystem() override;
    private:
        Microsoft::WRL::ComPtr<ID3D11Device> m_d3dDevice{};
        Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_d3dContext{};
    };
}
