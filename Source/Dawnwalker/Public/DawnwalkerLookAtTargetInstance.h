#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "DawnwalkerLookAtTargetInstance.generated.h"

USTRUCT(BlueprintType)
struct FDawnwalkerLookAtTargetInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LookAtTargetHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct LookAtTarget;
    
    DAWNWALKER_API FDawnwalkerLookAtTargetInstance();
};

