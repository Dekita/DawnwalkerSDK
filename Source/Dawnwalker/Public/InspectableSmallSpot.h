#pragma once
#include "CoreMinimal.h"
#include "InspectableSpot.h"
#include "InspectableSmallSpot.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API AInspectableSmallSpot : public AInspectableSpot {
    GENERATED_BODY()
public:
    AInspectableSmallSpot(const FObjectInitializer& ObjectInitializer);

};

