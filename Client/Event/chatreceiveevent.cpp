#include "chatreceiveevent.h"

namespace Client {
namespace Event {

ChatReceiveEvent::ChatReceiveEvent(QString msg, qint8 pos) :
    pos_(pos)
{
    this->msg_ = msg;
}

const QString &ChatReceiveEvent::msg() const
{
    return this->msg_;
}

qint8 ChatReceiveEvent::getPos() const
{
    return pos_;
}

} // namespace Event
} // namespace Client
