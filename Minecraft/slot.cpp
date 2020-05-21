#include "slot.h"

namespace Minecraft {

Slot::Slot() : isEmpty_(true)
{

}

Slot::Slot(Item item, qint8 count, QByteArray NBT) :
    isEmpty_(false),
    item_(item),
    count_(count),
    NBT_(NBT)
{

}

bool Slot::isEmpty() const
{
    return this->isEmpty_;
}

Item Slot::item() const
{
    return this->item_;
}

qint8 Slot::count() const
{
    return this->count_;
}

const QByteArray &Slot::NBT() const
{
    return this->NBT_;
}

} // namespace Minecraft
