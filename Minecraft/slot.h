#ifndef MINECRAFT_SLOT_H
#define MINECRAFT_SLOT_H

#include <QtGlobal>
#include <QByteArray>

#include "Minecraft/item.h"

namespace Minecraft {

class Slot
{
public:
    //generates an empty slot
    Slot();
    //generates a non-empty slot
    Slot(Minecraft::Item item, qint8 count, QByteArray NBT);

    bool isEmpty() const;
    Minecraft::Item item() const;
    qint8 count() const;
    const QByteArray &NBT() const;


protected:
    bool isEmpty_;
    Minecraft::Item item_;
    qint8 count_;
    QByteArray NBT_;
};

} // namespace Minecraft

#endif // MINECRAFT_SLOT_H
