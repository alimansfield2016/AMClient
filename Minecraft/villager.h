#ifndef VILLAGER_H
#define VILLAGER_H

#include <QtGlobal>

namespace Minecraft {


class Villager{

public:
    enum class Type{
        desert,
        jungle,
        plains,
        savanna,
        snow,
        swamp,
        taiga
    };

    enum class Proffession{
        none,
        armorer,
        butcher,
        cartographer,
        cleric,
        farmer,
        fisherman,
        fletcher,
        leatherworker,
        librarian,
        mason,
        nitwit,
        shepherd,
        toolsmith,
        weaponsmith
    };
    Villager(Type type, Proffession prof, qint32 level);

    Type type() const;

    Proffession proffession() const;

    qint32 level() const;

private:
    Type type_;
    Proffession proffession_;
    qint32 level_;
};

}

#endif // VILLAGER_H
