#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DawnwalkerTransportRoute.generated.h"

class AWayPoint;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerTransportRoute : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AWayPoint>> Waypoints;
    
    ADawnwalkerTransportRoute(const FObjectInitializer& ObjectInitializer);

};

