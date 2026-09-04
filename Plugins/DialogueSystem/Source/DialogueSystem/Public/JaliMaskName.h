#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "JaliMaskName.generated.h"

USTRUCT(BlueprintType)
struct FJaliMaskName : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FJaliMaskName();
};

