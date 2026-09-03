#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "EChapelDialogueResult.h"
#include "GameplayTagContainer.h"
#include "EChapelPanelConditionType.h"
#include "QuestConditionChapelPanelType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionChapelPanelType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChapelPanelConditionType PauseUntil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PanelTag;
    
public:
    UQuestConditionChapelPanelType();

    UFUNCTION(BlueprintCallable)
    void OnWidgetOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnPanelActiveChanged(const FGameplayTag& ChapelPanelTag, const bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void OnChapelDialogueResult(EChapelDialogueResult Result);
    
};

