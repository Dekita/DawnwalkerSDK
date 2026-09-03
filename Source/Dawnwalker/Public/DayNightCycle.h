#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DayNightCycle.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API ADayNightCycle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SolarTime;
    
    ADayNightCycle(const FObjectInitializer& ObjectInitializer);

};

