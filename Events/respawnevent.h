#ifndef CLIENT_EVENT_RESPAWNEVENT_H
#define CLIENT_EVENT_RESPAWNEVENT_H

#include <QString>

#include "Minecraft/dimension.h"
#include "Minecraft/difficulty.h"
#include "Minecraft/gamemode.h"

namespace Client {
namespace Event {

class RespawnEvent
{
public:
    RespawnEvent(Minecraft::Dimension dim, Minecraft::Difficulty difficulty, Minecraft::Gamemode gm, QString levelType);

    Minecraft::Dimension dimension() const;

    Minecraft::Difficulty difficulty() const;

    Minecraft::Gamemode gameMode() const;

    const QString &levelType() const;

protected:
    Minecraft::Dimension dimension_;
    Minecraft::Difficulty difficulty_;
    Minecraft::Gamemode gameMode_;
    QString levelType_;
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_RESPAWNEVENT_H
