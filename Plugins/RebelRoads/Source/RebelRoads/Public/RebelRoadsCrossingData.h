#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsCrossingData.generated.h"

USTRUCT(BlueprintType)
struct FRebelRoadsCrossingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CrossingProfileIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CrossingConnectionsStartIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CrossingConnectionsNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ConvexVerticesStartIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ConvexVerticesEndIdx;
    
    REBELROADS_API FRebelRoadsCrossingData();
};

