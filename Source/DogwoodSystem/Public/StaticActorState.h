#pragma once
#include "CoreMinimal.h"
#include "ActorState.h"
#include "StaticActorState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DOGWOODSYSTEM_API UStaticActorState : public UActorState {
    GENERATED_BODY()
public:
    UStaticActorState();

};

