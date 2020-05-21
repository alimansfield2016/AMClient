#ifndef CLIENT_EVENT_SERVERDISCONNECTEVENT_H
#define CLIENT_EVENT_SERVERDISCONNECTEVENT_H

#include <QString>

namespace Client {
namespace Event {

class ServerDisconnectEvent
{
public:

    enum DisconnectReason{
        CUSTOM,
        TIMEOUT,
        DISCONNECTED
    };

    ServerDisconnectEvent(QString customReason);
    ServerDisconnectEvent(DisconnectReason reason_);

    const QString &reason() const;

protected:
    QString reason_;

};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_SERVERDISCONNECTEVENT_H
