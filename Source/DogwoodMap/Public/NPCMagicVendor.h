#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "NPCMagicVendor.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API ANPCMagicVendor : public ATriggerMappinable {
    GENERATED_BODY()
public:
    ANPCMagicVendor(const FObjectInitializer& ObjectInitializer);

};

