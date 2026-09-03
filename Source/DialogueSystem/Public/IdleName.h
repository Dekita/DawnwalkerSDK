#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "IdleName.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FIdleName : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    FIdleName();
};

