#include "usebedevent.h"

namespace Client {
namespace Event {


UseBedEvent::UseBedEvent(qint32 eID, const Minecraft::Block::Position &pos) :
    eID_(eID),
    position_(pos)
{

}

qint32 UseBedEvent::eID() const
{
    return eID_;
}

const Minecraft::Block::Position &UseBedEvent::position() const
{
    return position_;
}

} // namespace Event
} // namespace Client
