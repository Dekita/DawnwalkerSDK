#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "IdleName.generated.h"

USTRUCT(BlueprintType)
struct FIdleName : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FIdleName();
};

