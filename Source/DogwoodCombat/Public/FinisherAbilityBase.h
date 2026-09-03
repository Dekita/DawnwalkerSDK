#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "CombatFocusAbilityBase.h"
#include "FinisherAttackData.h"
#include "FinisherAbilityBase.generated.h"

class UFocusAbilityLevelSequence;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UFinisherAbilityBase : public UCombatFocusAbilityBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFocusAbilityLevelSequence> FinisherSequence;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinisherAttackData FinisherAttackData;
    
    UFinisherAbilityBase();

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleFinisherTagOnTarget(UPARAM(Ref) FGameplayAbilityTargetDataHandle& TargetData, const bool bFinisherTagEnabled);
    
};

