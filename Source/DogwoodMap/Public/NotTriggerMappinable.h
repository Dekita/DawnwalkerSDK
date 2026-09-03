#pragma once
#include "CoreMinimal.h"
#include "Mappinable.h"
#include "NotTriggerMappinable.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODMAP_API ANotTriggerMappinable : public AMappinable {
    GENERATED_BODY()
public:
    ANotTriggerMappinable(const FObjectInitializer& ObjectInitializer);

};

