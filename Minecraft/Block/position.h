#ifndef MINECRAFT_LOCATION_H
#define MINECRAFT_LOCATION_H

#include <QtGlobal>

namespace Minecraft {
namespace Block {


class Position
{
public:
    Position();
    Position(quint64 xyz);
    Position(qint32 x, qint32 y, qint32 z);

    quint64 toQint64();

    qint32 x() const;
    qint32 y() const;
    qint32 z() const;

protected:
    qint32 x_, y_, z_;
};

} // namespace Block
} // namespace Minecraft

#endif // MINECRAFT_LOCATION_H
