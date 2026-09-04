#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "JaliConfigPicker.generated.h"

USTRUCT(BlueprintType)
struct FJaliConfigPicker : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FJaliConfigPicker();
};

