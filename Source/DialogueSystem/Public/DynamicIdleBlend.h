#pragma once
#include "CoreMinimal.h"
#include "IdleBlendRuntime.h"
#include "DynamicIdleBlend.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FDynamicIdleBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIdleBlendRuntime Blend;
    
    FDynamicIdleBlend();
};

