QT -= gui

TEMPLATE = lib
DEFINES += AMCLIENT_LIBRARY

CONFIG += c++11 object_parallel_to_source

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
	Client/Event/helditemchangeevent.cpp \
	Client/Event/animationevent.cpp \
	Client/Event/chatreceiveevent.cpp \
	Client/Event/chatsendevent.cpp \
	Client/Event/entityequipmentevent.cpp \
	Client/Event/joingameevent.cpp \
	Client/Event/playerspawnevent.cpp \
	Client/Event/positionlookevent.cpp \
	Client/Event/respawnevent.cpp \
	Client/Event/serverdisconnectevent.cpp \
	Client/Event/spawnpositionevent.cpp \
	Client/Event/timeupdateevent.cpp \
	Client/Event/updatehealthevent.cpp \
	Client/Event/usebedevent.cpp \
	Minecraft/Block/position.cpp \
	Minecraft/Entity/metadata.cpp \
	Minecraft/Entity/position.cpp \
	Minecraft/chat.cpp \
	Minecraft/nbt.cpp \
	Minecraft/particle.cpp \
	Minecraft/positionlook.cpp \
    Minecraft/slot.cpp \
	Minecraft/villager.cpp \
    Util/cancellable.cpp \
	Client/client.cpp

HEADERS += \
    AMClient_global.h \
	Client/Event/animationevent.h \
	Client/Event/helditemchangeevent.h \
	Client/Event/chatreceiveevent.h \
	Client/Event/chatsendevent.h \
	Client/Event/entityequipmentevent.h \
	Client/Event/joingameevent.h \
	Client/Event/playerspawnevent.h \
	Client/Event/positionlookevent.h \
	Client/Event/respawnevent.h \
	Client/Event/serverdisconnectevent.h \
	Client/Event/spawnpositionevent.h \
	Client/Event/timeupdateevent.h \
	Client/Event/updatehealthevent.h \
	Client/Event/usebedevent.h \
	Minecraft/Block/position.h \
	Minecraft/Entity/metadata.h \
	Minecraft/Entity/position.h \
	Minecraft/animation.h \
	Minecraft/chat.h \
	Minecraft/difficulty.h \
	Minecraft/dimension.h \
	Minecraft/direction.h \
	Minecraft/gamemode.h \
    Minecraft/item.h \
	Minecraft/nbt.h \
	Minecraft/particle.h \
	Minecraft/pose.h \
	Minecraft/positionlook.h \
    Minecraft/slot.h \
	Minecraft/uuid.h \
	Minecraft/villager.h \
    Util/cancellable.h \
	Client/client.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
