#include <DX3D/engine/dx3dEngine.h>
#include <DX3D/window/window.h>
#include <DX3D/graphics/graphicsEngine.h>
#include <DX3D/core/logger.h>

dx3d::engine::engine(const dx3dEngineDescriptor& descriptor) :
    base({*std::make_unique<logger>(descriptor.logLevel).release()}), m_loggerPtr(&m_logger)
{
    m_graphicsEngine = std::make_unique<graphicsEngine>(graphicsEngineDescriptor{m_logger});
    m_display = std::make_unique<window>(windowDescriptor{m_logger});

    m_loggerPtr -> log(logger::logLevel::Info, "Engine initialized.");
}

dx3d::engine::~engine()
{
    m_loggerPtr -> log(logger::logLevel::Info, "Engine deallocation started...");
}
