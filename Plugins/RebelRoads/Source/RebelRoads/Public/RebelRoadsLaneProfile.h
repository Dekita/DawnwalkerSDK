#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsLaneDirection.h"
#include "RebelRoadsLaneProfile.generated.h"

USTRUCT(BlueprintType)
struct FRebelRoadsLaneProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelRoadsLaneDirection Direction;
    
    REBELROADS_API FRebelRoadsLaneProfile();
};

