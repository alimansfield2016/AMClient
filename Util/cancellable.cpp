#include "cancellable.h"

Cancellable::Cancellable(bool unCancellable) :
    cancelled_(false),
    unCancellable_(unCancellable)
{

}

bool Cancellable::cancelled()
{
    return this->cancelled_;
}

bool Cancellable::setCancelled(bool state)
{
    this->cancelled_ |= state;
    if(!state && this->unCancellable_) this->cancelled_ = false;
    return this->cancelled_;
}
