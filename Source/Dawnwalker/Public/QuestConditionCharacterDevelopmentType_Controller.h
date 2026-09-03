#pragma once
#include "CoreMinimal.h"
#include "ECharacterDevelopmentMode.h"
#include "QuestNodeController.h"
#include "QuestConditionCharacterDevelopmentType_Controller.generated.h"

class UTraitAsset;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionCharacterDevelopmentType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestConditionCharacterDevelopmentType_Controller();

private:
    UFUNCTION(BlueprintCallable)
    void OnTraitPointsChanged(int32 TraitPointsChange);
    
    UFUNCTION(BlueprintCallable)
    void OnTraitLevelAvailable(const UTraitAsset* Trait, int32 Level, bool bUnlocked, bool bShowNotification);
    
    UFUNCTION(BlueprintCallable)
    void OnTraitEquippedChanged(const UTraitAsset* Trait, const bool bEquipped, int32 SlotId);
    
    UFUNCTION(BlueprintCallable)
    void OnTraitBought(const UTraitAsset* Trait);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotEquipmentActiveChanged(const bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void OnSkillTreeActiveChanged(const ECharacterDevelopmentMode InSkillTree, const bool bInActive);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickslotBound();
    
    UFUNCTION(BlueprintCallable)
    void OnMutationGained();
    
};

