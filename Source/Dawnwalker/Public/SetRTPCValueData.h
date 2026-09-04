#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "SetRTPCValueData.generated.h"

class UAkRtpc;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FSetRTPCValueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterpolationTimeMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RTPC;
    
    FSetRTPCValueData();
};

