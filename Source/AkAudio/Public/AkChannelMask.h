#pragma once
#include "CoreMinimal.h"
#include "AkChannelMask.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkChannelMask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChannelMask;
    
    FAkChannelMask();
};

