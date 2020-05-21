#ifndef ENTITY_POSITION_H
#define ENTITY_POSITION_H

#include <QtGlobal>

namespace Minecraft{
namespace Entity {

class Position
{
public:
    Position(qint32 x_fixed, qint32 y_fixed, qint32 z_fixed, qint8 yaw, qint8 pitch);
    Position(double x, double y, double z, float yaw, float pitch);

    double x() const;

    double y() const;

    double z() const;

    float yaw() const;

    float pitch() const;

private:
    double x_;
    double y_;
    double z_;
    float yaw_;
    float pitch_;
};

} // namespace Entity
} // namepsace Minecraft

#endif // ENTITY_POSITION_H
