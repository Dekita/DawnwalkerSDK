#pragma once
#include "CoreMinimal.h"
#include "InspectableObject.h"
#include "InspectableBigObject.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API AInspectableBigObject : public AInspectableObject {
    GENERATED_BODY()
public:
    AInspectableBigObject(const FObjectInitializer& ObjectInitializer);

};

