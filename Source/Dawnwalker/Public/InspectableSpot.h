#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InspectableSpot.generated.h"

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API AInspectableSpot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueName;
    
    AInspectableSpot(const FObjectInitializer& ObjectInitializer);

};

