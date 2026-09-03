#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "NanoPoiGate.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API ANanoPoiGate : public ATriggerMappinable {
    GENERATED_BODY()
public:
    ANanoPoiGate(const FObjectInitializer& ObjectInitializer);

};

