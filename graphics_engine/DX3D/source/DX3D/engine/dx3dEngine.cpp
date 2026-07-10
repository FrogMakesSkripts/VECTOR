#include <DX3D/engine/dx3dEngine.h>
#include <DX3D/window/window.h>
#include <DX3D/graphics/graphicsEngine.h>

dx3d::engine::engine()
{
    m_graphicsEngine = std::make_unique<graphicsEngine>();
    m_display = std::make_unique<window>();
}

dx3d::engine::~engine()
{
}
