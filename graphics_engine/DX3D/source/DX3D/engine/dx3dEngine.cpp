#include <DX3D/engine/dx3dEngine.h>
#include <DX3D/window/window.h>
#include <DX3D/graphics/graphicsEngine.h>
#include <DX3D/core/logger.h>

dx3d::engine::engine()
{
    m_loggerPtr = std::make_unique<logger>(logger::logLevel::Info);
    m_graphicsEngine = std::make_unique<graphicsEngine>();
    m_display = std::make_unique<window>();

    m_loggerPtr -> log(logger::logLevel::Info, "Engine initialized.");
}

dx3d::engine::~engine()
{
    m_loggerPtr -> log(logger::logLevel::Info, "Engine deallocation started...");
}
