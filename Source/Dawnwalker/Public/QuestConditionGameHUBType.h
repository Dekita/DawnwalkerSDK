#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "GameplayTagContainer.h"
#include "EHubPanelConditionType.h"
#include "QuestConditionGameHUBType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionGameHUBType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHubPanelConditionType PauseUntil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnyTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TabTag;
    
public:
    UQuestConditionGameHUBType();

    UFUNCTION(BlueprintCallable)
    void OnTabActiveChanged();
    
};

