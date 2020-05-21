#include "position.h"

namespace Minecraft{
namespace Entity {

Position::Position(qint32 x_fixed, qint32 y_fixed, qint32 z_fixed, qint8 yaw, qint8 pitch)
{
    this->x_ = (double)(x_fixed/32.0);
    this->y_ = (double)(y_fixed/32.0);
    this->z_ = (double)(z_fixed/32.0);

    this->yaw_   = (double)(yaw/256.0);
    this->pitch_ = (double)(pitch/256.0);
}

Position::Position(double x, double y, double z, float yaw, float pitch) :
    x_(x),
    y_(y),
    z_(z),
    yaw_(yaw),
    pitch_(pitch)
{

}

double Position::x() const
{
    return x_;
}

double Position::y() const
{
    return y_;
}

double Position::z() const
{
    return z_;
}

float Position::yaw() const
{
    return yaw_;
}

float Position::pitch() const
{
    return pitch_;
}

} // namespace Entity
} // namepsace Minecraft
