#include <DX3D/engine/engine.h>
#include <DX3D/window/window.h>

dx3d::engine::engine()
{
    m_display = std::make_unique<window>();
}

dx3d::engine::~engine()
{
}
