#pragma once

namespace dx3d
{
    class base
    {
    public:
        base();
        virtual ~base();
    protected:
        base(const base&) = delete;
        base(base&&) = delete;
        base& operator = (const base&) = delete;
        base& operator = (base&&) = delete;
    };
}
