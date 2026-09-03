#pragma once
#include "CoreMinimal.h"
#include "AkOutdoorsRoomParameters.generated.h"

class UAkAuxBus;

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkOutdoorsRoomParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* ReverbAuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReverbLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransmissionLoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuxSendLevel;
    
    FAkOutdoorsRoomParameters();
};

