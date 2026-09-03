#pragma once
#include "CoreMinimal.h"
#include "DirectionalGuardConfig.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FDirectionalGuardConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardChangeCooldownMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardChangeCooldownMax;
    
    FDirectionalGuardConfig();
};

