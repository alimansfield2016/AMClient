#ifndef CLIENT_EVENT_POSITIONLOOKEVENT_H
#define CLIENT_EVENT_POSITIONLOOKEVENT_H

#include "Minecraft/positionlook.h"

namespace Client {
namespace Event {

class PositionLookEvent
{
public:
    PositionLookEvent(Minecraft::PositionLook pos);

    Minecraft::PositionLook positionLook() const;

private:
    Minecraft::PositionLook positionLook_;
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_POSITIONLOOKEVENT_H
