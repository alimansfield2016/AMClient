#include "spawnpositionevent.h"

namespace Client {
namespace Event {

SpawnPositionEvent::SpawnPositionEvent(Minecraft::Block::Position pos) :
    pos_(pos)
{

}

Minecraft::Block::Position SpawnPositionEvent::pos() const
{
    return pos_;
}

} // namespace Event
} // namespace Client
