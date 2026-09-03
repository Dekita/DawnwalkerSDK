#pragma once
#include "CoreMinimal.h"
#include "EBlockingDirection.h"
#include "ECombatState.h"
#include "EDefenseType.h"
#include "EWeaponSwingDirection.h"
#include "QuestConditionType.h"
#include "ActorReference.h"
#include "ECharacterCombatActionConditionType.h"
#include "QuestConditionCharacterCombatActionType.generated.h"

class UCombatComponentBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionCharacterCombatActionType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterCombatActionConditionType PauseUntil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECombatState> AllowedCombatStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeUnblockableAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnySwingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponSwingDirection SwingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnyDefense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDefenseType> ExpectedDefenseTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockingDirection ExpectedBlockingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHardLocked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference Reference;
    
public:
    UQuestConditionCharacterCombatActionType();

    UFUNCTION(BlueprintCallable)
    void ParryWindowOpened(UCombatComponentBase* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnReEvaluateCondition();
    
    UFUNCTION(BlueprintCallable)
    void HardLockChanged(const bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void ForcedFistFightChanged(const bool bForced);
    
    UFUNCTION(BlueprintCallable)
    void DirectionalGuardEntered();
    
};

