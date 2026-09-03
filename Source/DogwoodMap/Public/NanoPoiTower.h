#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "NanoPoiTower.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API ANanoPoiTower : public ATriggerMappinable {
    GENERATED_BODY()
public:
    ANanoPoiTower(const FObjectInitializer& ObjectInitializer);

};

