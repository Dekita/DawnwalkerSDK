#pragma once
#include "CoreMinimal.h"
#include "DogwoodControlsLegendCondition.h"
#include "DogwoodUIControlsLegendCondition_AreFocusAbilitiesAvailable.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FDogwoodUIControlsLegendCondition_AreFocusAbilitiesAvailable : public FDogwoodControlsLegendCondition {
    GENERATED_BODY()
public:
    FDogwoodUIControlsLegendCondition_AreFocusAbilitiesAvailable();
};

