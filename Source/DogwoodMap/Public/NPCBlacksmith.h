#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "NPCBlacksmith.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API ANPCBlacksmith : public ATriggerMappinable {
    GENERATED_BODY()
public:
    ANPCBlacksmith(const FObjectInitializer& ObjectInitializer);

};

