#ifndef AMCLIENT_H
#define AMCLIENT_H

#include "AMClient_global.h"
#include <QObject>

#include "Event/joingameevent.h"
#include "Event/chatreceiveevent.h"
#include "Event/timeupdateevent.h"
#include "Event/entityequipmentevent.h"
#include "Event/spawnpositionevent.h"
#include "Event/updatehealthevent.h"
#include "Event/respawnevent.h"
#include "Event/positionlookevent.h"
#include "Event/helditemchangeevent.h"
#include "Event/usebedevent.h"
#include "Event/animationevent.h"
#include "Event/playerspawnevent.h"

#include "Event/chatsendevent.h"

#include "Event/serverdisconnectevent.h"


namespace Client {

class AMCLIENT_EXPORT AMClient : public QObject
{
    Q_OBJECT
public:
    AMClient(QString username, QString UUID = "", QString accessToken = "", QString configDir = "", QObject *parent = nullptr);

signals:
    void log(QString msg, int priority);

    //Minecraft signals available for use by plugins
    //Inbound
    void onJoinGame(const Event::JoinGameEvent &event);
    void onChatReceived(const Event::ChatReceiveEvent &event);;
    void onTimeUpdate(const Event::TimeUpdateEvent &event);
    void onEntityEquipment(const Event::EntityEquipmentEvent &event);
    void onSpawnPosition(const Event::SpawnPositionEvent &event);
    void onUpdateHealth(const Event::UpdateHealthEvent &event);
    void onRespawn(const Event::RespawnEvent &event);
    void onPositionAndLook(const Event::PositionLookEvent &event);
    void onHeldItemChange(const Event::HeldItemChangeEvent &event);
    void onUseBed(const Event::UseBedEvent &event);
    void onAnimation(const Event::AnimationEvent &event);
    void onPlayerSpawn(const Event::PlayerSpawnEvent &event);


    //Outbound
    void onChatSend(const Event::ChatSendEvent &event);


    void onServerJoin();
    void onServerDisconnect(const Event::ServerDisconnectEvent &event);


};

}

#endif // AMCLIENT_H
