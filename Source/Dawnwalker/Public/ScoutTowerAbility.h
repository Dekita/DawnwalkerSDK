#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DogwoodGameplayAbilityBase.h"
#include "EScoutTowerDirection.h"
#include "ScoutTowerAbility.generated.h"

class ATowerTipActor;

UCLASS(Blueprintable)
class DAWNWALKER_API UScoutTowerAbility : public UDogwoodGameplayAbilityBase {
    GENERATED_BODY()
public:
    UScoutTowerAbility();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShadowstepStarted(EScoutTowerDirection Direction, ATowerTipActor* Tower);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShadowstepFinished(EScoutTowerDirection Direction, ATowerTipActor* Tower);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnShadowstepEnded(bool bWasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetWarpTarget();
    
};

