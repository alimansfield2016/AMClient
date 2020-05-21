#include "respawnevent.h"

namespace Client {
namespace Event {

RespawnEvent::RespawnEvent(Minecraft::Dimension dim, Minecraft::Difficulty difficulty, Minecraft::Gamemode gm, QString levelType) :
    dimension_(dim),
    difficulty_(difficulty),
    gameMode_(gm),
    levelType_(levelType)
{

}

Minecraft::Dimension RespawnEvent::dimension() const
{
    return dimension_;
}

Minecraft::Difficulty RespawnEvent::difficulty() const
{
    return difficulty_;
}

Minecraft::Gamemode RespawnEvent::gameMode() const
{
    return gameMode_;
}

const QString &RespawnEvent::levelType() const
{
    return levelType_;
}

} // namespace Event
} // namespace Client
