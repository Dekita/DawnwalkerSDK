#pragma once
#include "CoreMinimal.h"
#include "InspectableSpot.h"
#include "InspectableBigSpot.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API AInspectableBigSpot : public AInspectableSpot {
    GENERATED_BODY()
public:
    AInspectableBigSpot(const FObjectInitializer& ObjectInitializer);

};

