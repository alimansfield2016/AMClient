#include "animationevent.h"

namespace Client {
namespace Event {


AnimationEvent::AnimationEvent(qint32 eID, Minecraft::Animation animation) :
    eID_(eID),
    animation_(animation)
{

}

qint32 AnimationEvent::eID() const
{
    return eID_;
}

Minecraft::Animation AnimationEvent::animation() const
{
    return animation_;
}

} // namespace Event
} // namespace Client
