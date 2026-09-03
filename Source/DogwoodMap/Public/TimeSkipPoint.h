#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "TimeSkipPoint.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API ATimeSkipPoint : public ATriggerMappinable {
    GENERATED_BODY()
public:
    ATimeSkipPoint(const FObjectInitializer& ObjectInitializer);

};

