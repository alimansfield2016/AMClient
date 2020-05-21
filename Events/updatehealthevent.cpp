#include "updatehealthevent.h"

namespace Client {
namespace Event {

UpdateHealthEvent::UpdateHealthEvent(float health, qint32 food, float saturation) :
    health_(health),
    food_(food),
    saturation_(saturation)
{

}

float UpdateHealthEvent::health() const
{
    return health_;
}

qint32 UpdateHealthEvent::food() const
{
    return food_;
}

float UpdateHealthEvent::saturation() const
{
    return saturation_;
}

} // namespace Event
} // namespace Client
