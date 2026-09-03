#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsLaneLinkData.generated.h"

USTRUCT(BlueprintType)
struct REBELROADS_API FRebelRoadsLaneLinkData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TargetLaneIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CurvePointIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    FRebelRoadsLaneLinkData();
};

