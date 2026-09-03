#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsLaneDirection.h"
#include "RebelRoadsLaneProfileData.generated.h"

USTRUCT(BlueprintType)
struct REBELROADS_API FRebelRoadsLaneProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelRoadsLaneDirection Direction;
    
    FRebelRoadsLaneProfileData();
};

