#pragma once
#include <DX3D/core/common.h>
#include <DX3D/core/base.h>
#include <DX3D/graphics/graphicsLogUtils.h>

#include <d3d11.h>
#include <wrl.h>

namespace dx3d
{
    struct graphicsResourceDescriptor
    {
        baseDescriptor base;
        std::shared_ptr<const renderSystem> renderSystem;
        ID3D11Device& device;
        IDXGIFactory& factory;
    };

    class graphicsResource : public base
    {
    public:
        explicit graphicsResource(const graphicsResourceDescriptor& descriptor) :
            base(descriptor.base), m_renderSystem(descriptor.renderSystem), m_device(descriptor.device), m_factory(descriptor.factory)
        {
        }

    protected:
        std::shared_ptr<const renderSystem> m_renderSystem;
        ID3D11Device& m_device;
        IDXGIFactory& m_factory;    
    };
}
