#pragma once
#include <DX3D/core/base.h>

namespace dx3d
{
    class window : public base
    {
    public:
        window();
        virtual ~window() override;

    private:
        void* m_handle{};
    };
}
