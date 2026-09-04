#pragma once
#include "CoreMinimal.h"
#include "IdleBlendRuntime.h"
#include "IdleChannelRuntime.generated.h"

USTRUCT(BlueprintType)
struct FIdleChannelRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIdleBlendRuntime Blend;
    
    DIALOGUESYSTEM_API FIdleChannelRuntime();
};

