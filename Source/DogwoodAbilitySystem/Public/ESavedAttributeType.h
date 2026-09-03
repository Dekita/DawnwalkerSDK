#pragma once
#include "CoreMinimal.h"
#include "ESavedAttributeType.generated.h"

UENUM(BlueprintType)
enum class ESavedAttributeType : uint8 {
    Invalid,
    Health,
    Blood,
    BloodPermDamage,
    BloodHealthRestoration,
    BloodRevives,
    TorchDuration,
    MutationCharged,
    MutationLevel,
};

