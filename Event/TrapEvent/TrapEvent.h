#ifndef CODE_TRAPEVENT_H
#define CODE_TRAPEVENT_H

#include "../EventInterface/EventInterface.h"
#include "../../Player/PlayerController/PlayerController.h"

class TrapEvent : public EventInterface{
public:
    TrapEvent(int damage);
    EventInterface* execute(PlayerController &controller) override;
    EventInterface* copy() const override;
    ~TrapEvent() override = default;
private:
    int damage_;
};


#endif //CODE_TRAPEVENT_H
