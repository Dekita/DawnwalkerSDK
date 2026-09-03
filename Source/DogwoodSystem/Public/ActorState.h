#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActorState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DOGWOODSYSTEM_API UActorState : public UObject {
    GENERATED_BODY()
public:
    UActorState();

};

