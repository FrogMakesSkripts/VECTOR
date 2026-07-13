#pragma once
#include <DX3D/core/core.h>
#include <DX3D/core/logger.h>
#include <DX3D/math/rect.h>

namespace dx3d
{
    struct baseDescriptor
    {
        logger& m_logger;
    };
    
    struct windowDescriptor
    {
        baseDescriptor base;
        rect size{};
    };

    struct displayDescriptor
    {
        windowDescriptor window;
        renderSystem& renderSystem;
    };

    struct graphicsEngineDescriptor
    {
        baseDescriptor base;
    };

    struct renderSystemDescriptor
    {
        baseDescriptor base;
    };

    struct swapChainDescriptor
    {
        void* windowHandle{};
        rect windowSize{};
    };

    struct dx3dEngineDescriptor
    {
        rect windowSize{1920, 1080};
        logger::logLevel logLevel = logger::logLevel::Error;
    };
}
