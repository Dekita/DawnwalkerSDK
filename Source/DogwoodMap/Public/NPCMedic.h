#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "NPCMedic.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API ANPCMedic : public ATriggerMappinable {
    GENERATED_BODY()
public:
    ANPCMedic(const FObjectInitializer& ObjectInitializer);

};

