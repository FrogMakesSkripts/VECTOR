#pragma once
#include <DX3D/core/core.h>

namespace dx3d
{
    class rect
    {
    public:
        rect() = default;
        rect(i32 width, i32 height) : left(0), top(0), width(width), height(height) {}
        rect(i32 left, i32 top, i32 width, i32 height) : left(left), top(top), width(width), height(height) {}
    public:
        i32 left{}, top{}, width{}, height{};
    };
}
