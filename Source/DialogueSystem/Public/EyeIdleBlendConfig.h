#pragma once
#include "CoreMinimal.h"
#include "EyeIdleBlendConfig.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FEyeIdleBlendConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendStartTime;
    
    FEyeIdleBlendConfig();
};

