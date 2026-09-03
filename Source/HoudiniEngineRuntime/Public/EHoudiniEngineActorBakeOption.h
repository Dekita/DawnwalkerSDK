#pragma once
#include "CoreMinimal.h"
#include "EHoudiniEngineActorBakeOption.generated.h"

UENUM(BlueprintType)
enum class EHoudiniEngineActorBakeOption : uint8 {
    OneActorPerComponent,
    OneActorPerHDA,
};

