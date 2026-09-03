#pragma once
#include "CoreMinimal.h"
#include "InspectableBase.h"
#include "InspectableLinkedItem.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API AInspectableLinkedItem : public AInspectableBase {
    GENERATED_BODY()
public:
    AInspectableLinkedItem(const FObjectInitializer& ObjectInitializer);

};

