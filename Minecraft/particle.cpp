#include "particle.h"

namespace Minecraft {

Particle::Particle(qint32 eID, Type type) :
    eID_(eID),
    type_(type)
{

}

qint32 Particle::eID() const
{
    return eID_;
}

Particle::Type Particle::type() const
{
    return type_;
}

qint32 Particle::blockState() const
{
    return blockState_;
}

const Minecraft::Slot &Particle::item() const
{
    return item_;
}

float Particle::red() const
{
    return red_;
}

float Particle::green() const
{
    return green_;
}

float Particle::blue() const
{
    return blue_;
}

float Particle::scale() const
{
    return scale_;
}

} // namespace Minecraft
