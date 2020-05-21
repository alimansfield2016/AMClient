#ifndef CLIENT_EVENT_PLAYERSPAWNEVENT_H
#define CLIENT_EVENT_PLAYERSPAWNEVENT_H

#include <QtGlobal>
#include "Minecraft/uuid.h"
#include "Minecraft/Entity/position.h"
#include "Minecraft/Entity/metadata.h"

namespace Client {
namespace Event {

class PlayerSpawnEvent
{
public:
    PlayerSpawnEvent(qint32 eID, const Minecraft::UUID &uuid, const Minecraft::Entity::Position &pos, qint16 item, const Minecraft::Entity::Metadata &metadata);
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_PLAYERSPAWNEVENT_H
