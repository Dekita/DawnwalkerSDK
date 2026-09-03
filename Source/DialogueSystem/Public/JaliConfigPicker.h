#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "JaliConfigPicker.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FJaliConfigPicker : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    FJaliConfigPicker();
};

