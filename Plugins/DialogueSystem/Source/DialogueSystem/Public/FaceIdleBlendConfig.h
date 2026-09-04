#pragma once
#include "CoreMinimal.h"
#include "FaceIdleBlendConfig.generated.h"

USTRUCT(BlueprintType)
struct FFaceIdleBlendConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendDuration;
    
    DIALOGUESYSTEM_API FFaceIdleBlendConfig();
};

