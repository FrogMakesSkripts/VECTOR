#pragma once
#include <stdexcept>
#include <memory>

namespace dx3d
{
    class base;
    class window;
    class engine;
    class graphicsEngine;
    class renderSystem;
    class logger;
    class swapChain;
    class display;

    using i32 = int;
    using ui32 = unsigned int;
    using f32 = float;
    using d64 = double;

    using SwapChainPtr = std::shared_ptr<swapChain>;
}
