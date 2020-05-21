#ifndef CLIENT_EVENT_TIMEUPDATEEVENT_H
#define CLIENT_EVENT_TIMEUPDATEEVENT_H

#include <QtGlobal>

namespace Client {
namespace Event {

class TimeUpdateEvent
{
public:
    TimeUpdateEvent(qint64 worldAge, qint64 timeOfDay);
    qint64 worldAge() const;
    qint64 timeOfDay() const;

protected:
    qint64 worldAge_, timeOfDay_;
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_TIMEUPDATEEVENT_H
