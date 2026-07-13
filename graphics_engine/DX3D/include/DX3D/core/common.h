#pragma once
#include <DX3D/core/core.h>
#include <DX3D/core/logger.h>

namespace dx3d
{
    struct baseDescriptor
    {
        logger& m_logger;
    };
    
    struct windowDescriptor
    {
        baseDescriptor base;
    };

    struct graphicsEngineDescriptor
    {
        baseDescriptor base;
    };

    struct renderSystemDescriptor
    {
        baseDescriptor base;
    };

    struct dx3dEngineDescriptor
    {
        logger::logLevel logLevel = logger::logLevel::Error;
    };
}