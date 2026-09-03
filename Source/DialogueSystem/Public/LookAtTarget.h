#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "LookAtTarget.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FLookAtTarget : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    FLookAtTarget();
};

