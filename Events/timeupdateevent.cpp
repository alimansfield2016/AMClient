#include "timeupdateevent.h"

namespace Client {
namespace Event {

TimeUpdateEvent::TimeUpdateEvent(qint64 worldAge, qint64 timeOfDay) :
    worldAge_(worldAge),
    timeOfDay_(timeOfDay)
{

}

qint64 TimeUpdateEvent::worldAge() const
{
    return this->worldAge_;
}

qint64 TimeUpdateEvent::timeOfDay() const
{
    return this->timeOfDay_;
}

} // namespace Event
} // namespace Client
