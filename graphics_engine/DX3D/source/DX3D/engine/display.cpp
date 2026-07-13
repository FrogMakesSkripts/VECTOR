#include <DX3D/engine/display.h>
#include <DX3D/graphics/renderSystem.h>

dx3d::display::display(const displayDescriptor& descriptor) : window(descriptor.window)
{
    m_swapChain = descriptor.renderSystem.createSwapChain({m_handle, m_size});
}
