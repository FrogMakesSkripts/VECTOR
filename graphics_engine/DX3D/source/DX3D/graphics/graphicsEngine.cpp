#include <DX3D/graphics/graphicsEngine.h>
#include <DX3D/graphics/renderSystem.h>

dx3d::graphicsEngine::graphicsEngine()
{
    m_renderSystem = std::make_unique<renderSystem>();
}

dx3d::graphicsEngine::~graphicsEngine()
{
}
