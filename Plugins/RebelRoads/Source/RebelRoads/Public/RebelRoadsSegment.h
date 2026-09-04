#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RebelRoadsSegment.generated.h"

class ARebelRoadsWayPoint;
class URebelRoadsLaneProfileDataAsset;
class URebelRoadsSegmentRenderingComponent;

UCLASS(Blueprintable, NotPlaceable)
class REBELROADS_API ARebelRoadsSegment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsRebuild;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelRoadsLaneProfileDataAsset* LaneProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelRoadsSegmentRenderingComponent* DrawComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARebelRoadsWayPoint* WayPoint1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARebelRoadsWayPoint* WayPoint2;
    
public:
    ARebelRoadsSegment(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNeedsRebuildChanged(bool bInNeedsRebuild);
    
};

