#include "villager.h"

namespace Minecraft {

Villager::Villager(Minecraft::Villager::Type type, Minecraft::Villager::Proffession prof, qint32 level) :
    type_(type),
    proffession_(prof),
    level_(level)
{

}

qint32 Villager::level() const
{
    return level_;
}

Villager::Proffession Villager::proffession() const
{
    return proffession_;
}

Villager::Type Villager::type() const
{
    return type_;
}

} // namespace Minecraft
