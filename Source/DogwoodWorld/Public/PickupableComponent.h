#pragma once
#include "CoreMinimal.h"
#include "InteractableComponent.h"
#include "PickupableComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODWORLD_API UPickupableComponent : public UInteractableComponent {
    GENERATED_BODY()
public:
    UPickupableComponent(const FObjectInitializer& ObjectInitializer);

};

