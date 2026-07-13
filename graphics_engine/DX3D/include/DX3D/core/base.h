#pragma once
#include <DX3D/core/common.h>

namespace dx3d
{
    class base
    {
    public:
        explicit base(const baseDescriptor& descriptor);
        virtual ~base();
        virtual logger& getLogger() const noexcept final;
    protected:
        base(const base&) = delete;
        base(base&&) = delete;
        base& operator = (const base&) = delete;
        base& operator = (base&&) = delete;
    protected:
        logger& m_logger;
    };
}
