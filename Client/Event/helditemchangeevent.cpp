#include "helditemchangeevent.h"

namespace Client {
namespace Event {

HeldItemChangeEvent::HeldItemChangeEvent(qint8 slot) :
    slot_(slot)
{

}

qint8 HeldItemChangeEvent::slot() const
{
    return this->slot_;
}

} // namespace Event
} // namespace Client
