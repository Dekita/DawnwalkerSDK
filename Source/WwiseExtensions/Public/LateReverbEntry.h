#pragma once
#include "CoreMinimal.h"
#include "LateReverbEntry.generated.h"

class UAkAuxBus;

USTRUCT(BlueprintType)
struct WWISEEXTENSIONS_API FLateReverbEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* IndoorReverbBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* OutdoorReverbBus;
    
    FLateReverbEntry();
};

