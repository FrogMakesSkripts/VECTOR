#pragma once
#include <DX3D/core/core.h>
#include <DX3D/core/base.h>

namespace dx3d
{
    class graphicsEngine final : base
    {
    public:
        explicit graphicsEngine(const graphicsEngineDescriptor& descriptor);
        virtual ~graphicsEngine() override;

        renderSystem& getRenderSystem() const noexcept;
    private:
        std::shared_ptr<renderSystem> m_renderSystem{};
    };
}
