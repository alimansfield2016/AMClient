#ifndef MINECRAFT_ENTITY_METADATA_H
#define MINECRAFT_ENTITY_METADATA_H

#include <QtGlobal>

#include "Minecraft/slot.h"
#include "Minecraft/Block/position.h"
#include "Minecraft/uuid.h"
#include "Minecraft/nbt.h"
#include "Minecraft/particle.h"
#include "Minecraft/direction.h"
#include "Minecraft/chat.h"
#include "Minecraft/villager.h"
#include "Minecraft/pose.h"

namespace Minecraft {
namespace Entity {

class Metadata
{
public:

    enum Type{
        Byte,
        VarInt,
        Float,
        String,
        Chat,
        Slot,
        Boolean,
        Rotation,
        Position,
        Direction,
        UUID,
        BlocID,
        NBT,
        Particle,
        VillagerData,
        Pose
    };
    Metadata(qint8 byte);
    Metadata(qint32 varInt);
    Metadata(float f);
    Metadata(QString string);
    Metadata(Minecraft::Chat &chat);
    Metadata(Minecraft::Slot &slot);
    Metadata(bool b);
    Metadata(float x, float y, float z);
    Metadata(Minecraft::Block::Position &pos);
    Metadata(Minecraft::Direction &dir);
    Metadata(Minecraft::UUID &uuid);
    Metadata(Minecraft::NBT &nbt);
    Metadata(Minecraft::Particle &particle);
    Metadata(Minecraft::Villager &villager);
    Metadata(Minecraft::Pose pose);



    Type type() const;

private:
    Type type_;
    qint8 byte_;
    qint32 varInt_;
    float f_;
    QString string_;
    Minecraft::Chat chat_ = Minecraft::Chat("", (Minecraft::Chat::Position)-1);
    Minecraft::Slot slot_;
    bool b_ = false;
    float x_, y_, z_;
    Minecraft::Block::Position pos_;
    Minecraft::Direction dir_;
    Minecraft::UUID uuid_;
    Minecraft::NBT nbt_;
    Minecraft::Particle particle_ = Minecraft::Particle(-1, (Particle::Type)-1);
    Minecraft::Villager villager_ = Minecraft::Villager((Minecraft::Villager::Type)-1, (Minecraft::Villager::Proffession)-1, -1);
    Minecraft::Pose pose_;

};

} // namespace Entity
} // namespace Minecraft

#endif // MINECRAFT_ENTITY_METADATA_H
