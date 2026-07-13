#include <DX3D/core/base.h>
using namespace dx3d;

dx3d::base::base(const baseDescriptor& descriptor) : m_logger(descriptor.m_logger)
{
}

dx3d::base::~base()
{
}

logger &dx3d::base::getLogger() const noexcept
{
    return m_logger;
}
