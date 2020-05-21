#ifndef CLIENT_EVENT_CHATRECEIVEEVENT_H
#define CLIENT_EVENT_CHATRECEIVEEVENT_H

#include <QString>

namespace Client {
namespace Event {

class ChatReceiveEvent
{
public:
    ChatReceiveEvent(QString msg_, qint8 pos_);

    const QString &msg() const;

    qint8 getPos() const;

protected:
    QString msg_;
    qint8 pos_;
};

} // namespace Event
} // namespace Client

#endif // CLIENT_EVENT_CHATRECEIVEEVENT_H
