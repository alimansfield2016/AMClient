#include "positionlookevent.h"

namespace Client {
namespace Event {

PositionLookEvent::PositionLookEvent(Minecraft::PositionLook pos) :
    positionLook_(pos)
{

}

Minecraft::PositionLook PositionLookEvent::positionLook() const
{
    return positionLook_;
}

} // namespace Event
} // namespace Client
