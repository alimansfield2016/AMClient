#ifndef CHATSENDEVENT_H
#define CHATSENDEVENT_H

#include <QString>

#include "Util/cancellable.h"

namespace Client {
namespace Event {

class ChatSendEvent : public Cancellable
{
public:
    ChatSendEvent(QString msg_);

    const QString &msg() const;

protected:
    const QString msg_;

};

}
}

#endif // CHATSENDEVENT_H
