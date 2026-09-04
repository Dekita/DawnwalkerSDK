#pragma once
#include "CoreMinimal.h"
#include "RebelGeomFloorTestFlags.generated.h"

USTRUCT(BlueprintType)
struct FRebelGeomFloorTestFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSlopeDownTest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSlopeUpTest: 1;
    
    DAWNWALKER_API FRebelGeomFloorTestFlags();
};

