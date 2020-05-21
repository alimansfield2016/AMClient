#include "positionlook.h"

namespace Minecraft {

PositionLook::PositionLook(double x, double y, double z, float pitch, float yaw, quint8 flags) :
    x_(x),
    y_(y),
    z_(z),
    pitch_(pitch),
    yaw_(yaw)
{
    if(flags&X) xRel_ = true; else xRel_ = false;
    if(flags&Y) yRel_ = true; else yRel_ = false;
    if(flags&Z) zRel_ = true; else zRel_ = false;
    if(flags&X_ROT) pitchRel_ = true; else pitchRel_ = false;
    if(flags&Y_ROT)   yawRel_ = true; else   yawRel_ = false;

}

double PositionLook::x() const
{
    return x_;
}

bool PositionLook::yawRel() const
{
    return yawRel_;
}

float PositionLook::yaw() const
{
    return yaw_;
}

bool PositionLook::pitchRel() const
{
    return pitchRel_;
}

float PositionLook::pitch() const
{
    return pitch_;
}

bool PositionLook::zRel() const
{
    return zRel_;
}

double PositionLook::z() const
{
    return z_;
}

bool PositionLook::yRel() const
{
    return yRel_;
}

double PositionLook::y() const
{
    return y_;
}

bool PositionLook::xRel() const
{
    return xRel_;
}

} // namespace Minecraft
