#include "joingameevent.h"

namespace Client {
namespace Event {

JoinGameEvent::JoinGameEvent(qint32 eID, Minecraft::Gamemode gm, Minecraft::Dimension dim, Minecraft::Difficulty diff, quint8 maxPlayers, QString levelType, bool reduceDebug) :
    eID_(eID),
    gameMode_(gm),
    dimension_(dim),
    difficulty_(diff),
    maxPlayers_(maxPlayers),
    levelType_(QString(levelType)),
    reduceDebug_(reduceDebug)
{

}

qint32 JoinGameEvent::eID() const
{
    return eID_;
}

Minecraft::Gamemode JoinGameEvent::gameMode() const
{
    return gameMode_;
}

Minecraft::Dimension JoinGameEvent::dimension() const
{
    return dimension_;
}

Minecraft::Difficulty JoinGameEvent::difficulty() const
{
    return difficulty_;
}

quint8 JoinGameEvent::maxPlayers() const
{
    return maxPlayers_;
}

QString JoinGameEvent::levelType() const
{
    return levelType_;
}

bool JoinGameEvent::reduceDebug() const
{
    return reduceDebug_;
}

} // namespace Event
} // namespace Client
