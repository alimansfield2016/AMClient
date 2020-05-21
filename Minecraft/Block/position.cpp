#include "position.h"

namespace Minecraft {
namespace Block {

Position::Position() :
    x_(0),
    y_(64),
    z_(0)
{

}

Position::Position(quint64 xyz)
{
    this->x_ = xyz>>38;
    if(this->x_ > (2^25)) this->x_ -= 2^26;
    this->y_ = xyz&0xFFF;
    if(this->y_ > (2^11)) this->y_ -= 2^12;
    this->z_ = ((xyz<<26)>>38);
    if(this->z_ > (2^25)) this->z_ -= 2^26;
}

Position::Position(qint32 x, qint32 y, qint32 z) :
    x_(x),
    y_(y),
    z_(z)
{

}

quint64 Position::toQint64()
{
    qint64 x = this->x_;
    if(x<0) x += 2^26;
    qint64 y = this->y_;
    if(y<0) y += 2^12;
    qint64 z = this->z_;
    if(z<0) z += 2^26;

    quint64 out = ((x & 0x3FFFFFF) << 38) | ((z & 0x3FFFFFF) << 12) | (y & 0xFFF);
    return out;
}

qint32 Position::x() const
{
    return this->x_;
}

qint32 Position::y() const
{
    return this->y_;
}

qint32 Position::z() const
{
    return this->z_;
}

} // namespace Block
} // namespace Minecraft
