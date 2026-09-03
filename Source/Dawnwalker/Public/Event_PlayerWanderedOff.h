#pragma once
#include "CoreMinimal.h"
#include "BaseEvent.h"
#include "Event_PlayerWanderedOff.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UEvent_PlayerWanderedOff : public UBaseEvent {
    GENERATED_BODY()
public:
    UEvent_PlayerWanderedOff();

};

