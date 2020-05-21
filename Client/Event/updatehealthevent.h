#ifndef CLIENT_EVENT_UPDATEHEALTHEVENT_H
#define CLIENT_EVENT_UPDATEHEALTHEVENT_H

#include <QtGlobal>

namespace Client {
namespace Event {

class UpdateHealthEvent
{
public:
    UpdateHealthEvent(float health, qint32 food, float saturation);

    float health() const;
    qint32 food() const;
    float saturation() const;

protected:
    float health_;
    qint32 food_;
    float saturation_;
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_UPDATEHEALTHEVENT_H
