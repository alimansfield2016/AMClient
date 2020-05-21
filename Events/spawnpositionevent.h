#ifndef CLIENT_EVENT_SPAWNPOSITIONEVENT_H
#define CLIENT_EVENT_SPAWNPOSITIONEVENT_H

#include "Minecraft/Block/position.h"


namespace Client {
namespace Event {

class SpawnPositionEvent
{
public:
    SpawnPositionEvent(Minecraft::Block::Position pos);

    Minecraft::Block::Position pos() const;

private:
    Minecraft::Block::Position pos_;
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_SPAWNPOSITIONEVENT_H
