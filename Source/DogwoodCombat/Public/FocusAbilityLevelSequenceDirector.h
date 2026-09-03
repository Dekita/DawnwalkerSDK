#pragma once
#include "CoreMinimal.h"
#include "DismembermentForceParams.h"
#include "EDismemberLimb.h"
#include "LevelSequenceDirector.h"
#include "FocusAbilityLevelSequenceDirector.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UFocusAbilityLevelSequenceDirector : public ULevelSequenceDirector {
    GENERATED_BODY()
public:
    UFocusAbilityLevelSequenceDirector();

    UFUNCTION(BlueprintCallable)
    void OnPlayBloodEffectsOnWeaponTrigger();
    
    UFUNCTION(BlueprintCallable)
    void OnHitTrigger();
    
    UFUNCTION(BlueprintCallable)
    void DismemberLimb(EDismemberLimb InLimb, UPARAM(Ref) FDismembermentForceParams& DismembermentForceParams);
    
};

