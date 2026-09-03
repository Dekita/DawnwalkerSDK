#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "NPCFoodTrader.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API ANPCFoodTrader : public ATriggerMappinable {
    GENERATED_BODY()
public:
    ANPCFoodTrader(const FObjectInitializer& ObjectInitializer);

};

