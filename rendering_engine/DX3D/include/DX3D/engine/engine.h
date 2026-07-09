#pragma once
#include <DX3D/core/base.h>
#include <DX3D/core/core.h>

namespace dx3d
{
    class engine : public base
    {
    public:
        engine();
        virtual ~engine() override;

        virtual void run() final;
    private:
        std::unique_ptr<window> m_display{};
        bool m_isRunning{true};
    };
}
