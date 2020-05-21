#include "chatsendevent.h"

namespace Client {
namespace Event {

ChatSendEvent::ChatSendEvent(QString msg) :
    Cancellable(),
    msg_(msg)
{

}

const QString &ChatSendEvent::msg() const
{
    return this->msg_;
}

}
}



