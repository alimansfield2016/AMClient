#ifndef MINECRAFT_CHAT_H
#define MINECRAFT_CHAT_H

#include <QString>

namespace Minecraft {

class Chat
{
public:

    enum class Position{
        chat,
        system,
        screen
    };

    Chat(QString msg, Position pos);
};

} // namespace Minecraft

#endif // MINECRAFT_CHAT_H
