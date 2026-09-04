#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "GestureAnimationSlot.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FGestureAnimationSlot : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    FGestureAnimationSlot();
};

