#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "NPCTavern.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API ANPCTavern : public ATriggerMappinable {
    GENERATED_BODY()
public:
    ANPCTavern(const FObjectInitializer& ObjectInitializer);

};

