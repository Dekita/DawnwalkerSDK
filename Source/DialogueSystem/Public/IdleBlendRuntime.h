#pragma once
#include "CoreMinimal.h"
#include "IdlePoseRuntime.h"
#include "IdleBlendRuntime.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FIdleBlendRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIdlePoseRuntime Pose;
    
    FIdleBlendRuntime();
};

