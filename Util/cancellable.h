#ifndef CANCELLABLE_H
#define CANCELLABLE_H


class Cancellable
{
public:
    Cancellable(bool unCancellable_ = false);
    bool cancelled();
    bool setCancelled(bool state);
protected:
    bool cancelled_;
    bool unCancellable_;

};

#endif // CANCELLABLE_H
