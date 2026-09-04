#pragma once
#include "CoreMinimal.h"
#include "IdleBlendRuntime.h"
#include "DynamicIdleBlend.generated.h"

USTRUCT(BlueprintType)
struct FDynamicIdleBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIdleBlendRuntime Blend;
    
    DIALOGUESYSTEM_API FDynamicIdleBlend();
};

