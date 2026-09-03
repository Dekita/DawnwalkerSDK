#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "JaliMaskName.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FJaliMaskName : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    FJaliMaskName();
};

