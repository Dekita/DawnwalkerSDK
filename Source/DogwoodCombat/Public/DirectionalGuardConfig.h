#pragma once
#include "CoreMinimal.h"
#include "DirectionalGuardConfig.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalGuardConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardChangeCooldownMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardChangeCooldownMax;
    
    DOGWOODCOMBAT_API FDirectionalGuardConfig();
};

