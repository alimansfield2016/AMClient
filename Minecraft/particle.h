#ifndef MINECRAFT_PARTICLE_H
#define MINECRAFT_PARTICLE_H

#include <QtGlobal>

#include "Minecraft/slot.h"

namespace Minecraft {

class Particle
{
public:

    enum class Type{
        ambient_entity_effect,
        angry_villager,
        barrier,
        block,
        bubble,
        cloud,
        crit,
        damage_indicator,
        dragon_breath,
        dripping_lava,
        falling_lava,
        landing_lava,
        dripping_water,
        falling_water,
        dust,
        effect,
        elder_guardian,
        enchanted_hit,
        enchant,
        end_rod,
        entity_effect,
        explosion_emitter,
        explosion,
        falling_dust,
        firework,
        fishing,
        flame,
        flash,
        happy_villager,
        composter,
        heart,
        instant_effect,
        item,
        item_slime,
        item_snowball,
        large_smoke,
        lava,
        mycelium,
        note,
        poof,
        portal,
        rain,
        smoke,
        sneeze,
        spit,
        squid_ink,
        sweep_attack,
        totem_of_undying,
        underwater,
        splash,
        witch,
        bubble_pop,
        current_down,
        bubble_column_up,
        nautilus,
        dolphin,
        campfire_cosy_smoke,
        campfire_signal_smoke,
        dripping_honey,
        falling_honey,
        landing_honey,
        falling_nectar,
    };


    Particle(qint32 eID, Type type);
    //minecraft:block
    //minecraft:falling_dust
    Particle(qint32 eID, Type type, qint32 blockState);
    //minecraft:item
    Particle(qint32 eID, Type type, Minecraft::Slot item);
    //minecraft:dust
    Particle(qint32 eID, Type type, float red, float green, float blue, float scale);

    qint32 eID() const;

    Type type() const;

    qint32 blockState() const;

    const Minecraft::Slot &item() const;

    float red() const;

    float green() const;

    float blue() const;

    float scale() const;

private:
    qint32 eID_;
    Type type_;
    qint32 blockState_ = -1;
    Minecraft::Slot item_;
    float red_ = 0, green_ = 0, blue_ = 0, scale_ = 0;
};

} // namespace Minecraft

#endif // MINECRAFT_PARTICLE_H
