#ifndef CLIENT_EVENT_ANIMATIONEVENT_H
#define CLIENT_EVENT_ANIMATIONEVENT_H


#include <QtGlobal>
#include "Minecraft/animation.h"

namespace Client {
namespace Event {

class AnimationEvent
{
public:
    AnimationEvent(qint32 eID, Minecraft::Animation animation);

    qint32 eID() const;

    Minecraft::Animation animation() const;

private:
    qint32 eID_;
    Minecraft::Animation animation_;
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_ANIMATIONEVENT_H
