#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "DawnwalkerPopulationAreaTrigger.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API ADawnwalkerPopulationAreaTrigger : public ATriggerVolume {
    GENERATED_BODY()
public:
    ADawnwalkerPopulationAreaTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

