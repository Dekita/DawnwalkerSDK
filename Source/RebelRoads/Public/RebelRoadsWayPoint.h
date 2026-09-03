#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RebelRoadsWayPoint.generated.h"

class ARebelRoadsSegment;
class URebelRoadsCrossingProfileDataAsset;
class URebelRoadsWayPointRenderingComponent;

UCLASS(Abstract, Blueprintable)
class REBELROADS_API ARebelRoadsWayPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsRebuild;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelRoadsCrossingProfileDataAsset* CrossingProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARebelRoadsSegment*> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelRoadsWayPointRenderingComponent* DrawComponent;
    
public:
    ARebelRoadsWayPoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNeedsRebuildChanged(bool bInNeedsRebuild);
    
};

