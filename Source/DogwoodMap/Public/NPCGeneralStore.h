#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "NPCGeneralStore.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API ANPCGeneralStore : public ATriggerMappinable {
    GENERATED_BODY()
public:
    ANPCGeneralStore(const FObjectInitializer& ObjectInitializer);

};

