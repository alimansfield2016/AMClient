#ifndef CLIENT_EVENT_JOINGAMEEVENT_H
#define CLIENT_EVENT_JOINGAMEEVENT_H

#include <QtGlobal>
#include <QString>
#include "Minecraft/gamemode.h"
#include "Minecraft/dimension.h"
#include "Minecraft/difficulty.h"

namespace Client {
namespace Event {

class JoinGameEvent
{
public:
    JoinGameEvent(qint32 eID, Minecraft::Gamemode gm, Minecraft::Dimension dim, Minecraft::Difficulty diff, quint8 maxPlayers, QString levelType, bool reduceDebug);
    
    qint32 eID() const;
    
    Minecraft::Gamemode gameMode() const;
    
    Minecraft::Dimension dimension() const;
    
    Minecraft::Difficulty difficulty() const;
    
    quint8 maxPlayers() const;
    
    QString levelType() const;
    
    bool reduceDebug() const;
    
private:
    qint32 eID_;
    Minecraft::Gamemode gameMode_;
    Minecraft::Dimension dimension_;
    Minecraft::Difficulty difficulty_;
    quint8 maxPlayers_;
    QString levelType_;
    bool reduceDebug_;
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_JOINGAMEEVENT_H
