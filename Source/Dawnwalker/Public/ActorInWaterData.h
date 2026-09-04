#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorInWaterData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorInWaterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WaterHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInDeepWaterTagApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInAnyWaterTagApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDidFirstUpdateWhenEnteredWater;
    
    DAWNWALKER_API FActorInWaterData();
};

