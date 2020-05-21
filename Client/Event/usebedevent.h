#ifndef CLIENT_EVENT_USEBEDEVENT_H
#define CLIENT_EVENT_USEBEDEVENT_H

#include <QtGlobal>
#include "Minecraft/Block/position.h"

namespace Client {
namespace Event {

class UseBedEvent
{
public:
    UseBedEvent(qint32 eID, const Minecraft::Block::Position &pos);

    qint32 eID() const;

    const Minecraft::Block::Position &position() const;

private:
    qint32 eID_;
    const Minecraft::Block::Position position_;
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_USEBEDEVENT_H
