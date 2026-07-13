#include <DX3D/graphics/graphicsEngine.h>
#include <DX3D/graphics/renderSystem.h>

dx3d::graphicsEngine::graphicsEngine(const graphicsEngineDescriptor& descriptor) : base(descriptor.base)
{
    m_renderSystem = std::make_unique<renderSystem>(renderSystemDescriptor{m_logger});
}

dx3d::graphicsEngine::~graphicsEngine()
{
}
