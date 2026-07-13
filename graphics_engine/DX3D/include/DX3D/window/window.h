#pragma once
#include <DX3D/core/base.h>
#include <DX3D/core/common.h>

namespace dx3d
{
    class window : public base
    {
    public:
        explicit window(const windowDescriptor& descriptor);
        virtual ~window() override;

    private:
        void* m_handle{};
    };
}
