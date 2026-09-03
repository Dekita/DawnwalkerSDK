#pragma once
#include "CoreMinimal.h"
#include "ActorState.h"
#include "PawnState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DOGWOODSYSTEM_API UPawnState : public UActorState {
    GENERATED_BODY()
public:
    UPawnState();

};

