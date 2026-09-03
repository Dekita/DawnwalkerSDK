#pragma once
#include "CoreMinimal.h"
#include "InspectableObject.h"
#include "InspectableSmallObject.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API AInspectableSmallObject : public AInspectableObject {
    GENERATED_BODY()
public:
    AInspectableSmallObject(const FObjectInitializer& ObjectInitializer);

};

