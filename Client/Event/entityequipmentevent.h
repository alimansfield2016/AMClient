#ifndef CLIENT_EVENT_ENTITYEQUIPMENTEVENT_H
#define CLIENT_EVENT_ENTITYEQUIPMENTEVENT_H

#include <QtGlobal>

#include "Minecraft/slot.h"

namespace Client {
namespace Event {

class EntityEquipmentEvent
{
public:

    enum Slot{
        MAIN_HAND,
        OFF_HAND,
        BOOTS,
        LEGGINGS,
        CHESTPLATE,
        HELMET,
    };

    EntityEquipmentEvent(qint32 eID, EntityEquipmentEvent::Slot slot, Minecraft::Slot item);

    qint32 eID() const;
    EntityEquipmentEvent::Slot slot() const;
    const Minecraft::Slot &item() const;

protected:
    qint32 eID_;
    EntityEquipmentEvent::Slot slot_;
    Minecraft::Slot item_;

};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_ENTITYEQUIPMENTEVENT_H
