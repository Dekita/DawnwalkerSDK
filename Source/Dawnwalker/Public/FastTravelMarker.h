#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FastTravelMarker.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API AFastTravelMarker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MarkerIdentifier;
    
public:
    AFastTravelMarker(const FObjectInitializer& ObjectInitializer);

};

