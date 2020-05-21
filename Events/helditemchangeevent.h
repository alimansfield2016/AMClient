#ifndef CLIENT_EVENT_HELDITEMCHANGEEVENT_H
#define CLIENT_EVENT_HELDITEMCHANGEEVENT_H

#include <QtGlobal>

namespace Client {
namespace Event {

class HeldItemChangeEvent
{
public:
    HeldItemChangeEvent(qint8 slot);

    qint8 slot() const;

private:
    qint8 slot_;
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_HELDITEMCHANGEEVENT_H
