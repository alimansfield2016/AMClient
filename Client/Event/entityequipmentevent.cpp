#include "entityequipmentevent.h"

namespace Client {
namespace Event {

EntityEquipmentEvent::EntityEquipmentEvent(qint32 eID, EntityEquipmentEvent::Slot slot, Minecraft::Slot item) :
    eID_(eID),
    slot_(slot),
    item_(item)
{

}

qint32 EntityEquipmentEvent::eID() const
{
    return this->eID_;
}

EntityEquipmentEvent::Slot EntityEquipmentEvent::slot() const
{
    return this->slot_;
}

const Minecraft::Slot &EntityEquipmentEvent::item() const
{
    return this->item_;
}

} // namespace Event
} // namespace Client
