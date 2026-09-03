#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "EFocusModeConditionType.h"
#include "QuestConditionFocusModeType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionFocusModeType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFocusModeConditionType ConditionType;
    
public:
    UQuestConditionFocusModeType();

    UFUNCTION(BlueprintCallable)
    void OnFocusModeExited();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusModeEntered();
    
};

