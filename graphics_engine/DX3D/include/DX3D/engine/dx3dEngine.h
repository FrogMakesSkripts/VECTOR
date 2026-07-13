#pragma once
#include <DX3D/core/base.h>
#include <DX3D/core/core.h>

namespace dx3d
{
    class engine : public base
    {
    public:
        explicit engine(const dx3dEngineDescriptor& descriptor);
        virtual ~engine() override;

        virtual void run() final;
    private:
        std::unique_ptr<logger> m_loggerPtr{};
        std::unique_ptr<graphicsEngine> m_graphicsEngine{};
        std::unique_ptr<window> m_display{};
        bool m_isRunning{true};
    };
}
