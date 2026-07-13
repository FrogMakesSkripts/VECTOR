#pragma once
#include <DX3D/core/logger.h>

namespace dx3d
{
#define DX3DGraphicsLogErrorAndThrow(hardware, message) { auto response = (hardware);\
    if (FAILED(response)) { DX3DLogErrorAndThrow(message); }}
}