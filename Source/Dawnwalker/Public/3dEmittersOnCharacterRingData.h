#pragma once
#include "CoreMinimal.h"
#include "MaskEvent.h"
#include "MaskEvents.h"
#include "3dEmittersOnCharacterRingData.generated.h"

class UBiomesMaskAsset;

USTRUCT(BlueprintType)
struct DAWNWALKER_API F3dEmittersOnCharacterRingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalDisplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumMaskValueToTrigger3dEmitters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaskEvent> DefaultMask3dEvents;
    
    F3dEmittersOnCharacterRingData();
};

