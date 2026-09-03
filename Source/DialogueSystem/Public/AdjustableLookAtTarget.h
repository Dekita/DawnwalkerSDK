#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "AdjustableLookAtTarget.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FAdjustableLookAtTarget : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    FAdjustableLookAtTarget();
};

