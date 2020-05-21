#ifndef MINECRAFT_POSITIONLOOK_H
#define MINECRAFT_POSITIONLOOK_H

#include <QtGlobal>

namespace Minecraft {

class PositionLook
{
public:
    PositionLook(double x, double y, double z, float pitch, float yaw, quint8 flags);

    double x() const;
    bool xRel() const;
    double y() const;
    bool yRel() const;
    double z() const;
    bool zRel() const;
    float pitch() const;
    bool pitchRel() const;
    float yaw() const;
    bool yawRel() const;

private:
    double x_;
    bool xRel_;
    double y_;
    bool yRel_;
    double z_;
    bool zRel_;
    float pitch_;
    bool pitchRel_;
    float yaw_;
    bool yawRel_;

    enum RelFlags{
        X = 0x01,
        Y = 0x02,
        Z = 0x04,
        Y_ROT = 0x08,
        X_ROT = 0x10,
    };

};

} // namespace Minecraft

#endif // MINECRAFT_POSITIONLOOK_H
