#include "metadata.h"

namespace Minecraft {
namespace Entity {

Metadata::Metadata(const qint8 byte) :
    type_(Byte),
    byte_(byte)
{

}

Metadata::Metadata(qint32 varInt) :
    type_(VarInt),
    varInt_(varInt)
{

}

Metadata::Metadata(float f) :
    type_(Float),
    f_(f)
{

}

Metadata::Metadata(QString string) :
    type_(String),
    string_(string)
{

}

Metadata::Type Metadata::type() const
{
    return type_;
}

} // namespace Entity
} // namespace Minecraft
