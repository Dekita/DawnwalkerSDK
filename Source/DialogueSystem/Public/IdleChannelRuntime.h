#pragma once
#include "CoreMinimal.h"
#include "IdleBlendRuntime.h"
#include "IdleChannelRuntime.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FIdleChannelRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIdleBlendRuntime Blend;
    
    FIdleChannelRuntime();
};

