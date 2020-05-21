#include "serverdisconnectevent.h"

namespace Client {
namespace Event {

ServerDisconnectEvent::ServerDisconnectEvent(QString customReason) :
    reason_(customReason)
{
    //parse chat JSON here
}

ServerDisconnectEvent::ServerDisconnectEvent(ServerDisconnectEvent::DisconnectReason reason)
{
    switch (reason) {
    case CUSTOM: this->reason_ = "No reason supplied!"; break;
    case TIMEOUT: this->reason_ = "Connection timed out"; break;
    case DISCONNECTED: this->reason_ = "Disconnected by peer"; break;
    }
}

const QString &ServerDisconnectEvent::reason() const
{
    return this->reason_;
}

} // namespace Event
} // namespace Client
