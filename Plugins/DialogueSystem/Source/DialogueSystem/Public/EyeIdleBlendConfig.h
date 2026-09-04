#pragma once
#include "CoreMinimal.h"
#include "EyeIdleBlendConfig.generated.h"

USTRUCT(BlueprintType)
struct FEyeIdleBlendConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendStartTime;
    
    DIALOGUESYSTEM_API FEyeIdleBlendConfig();
};

