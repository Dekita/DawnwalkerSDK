#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "EDawnwalkerLookAtTargetType.h"
#include "DawnwalkerLookAtTarget.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerLookAtTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDawnwalkerLookAtTargetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpiryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Tracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Turning;
    
    FDawnwalkerLookAtTarget();
};

