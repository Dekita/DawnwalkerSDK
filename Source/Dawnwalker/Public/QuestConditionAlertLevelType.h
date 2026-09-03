#pragma once
#include "CoreMinimal.h"
#include "AlertLevelChangeInfo.h"
#include "QuestConditionType.h"
#include "EConditionCheckType.h"
#include "EAlertStage.h"
#include "EAlertConditionType.h"
#include "QuestConditionAlertLevelType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionAlertLevelType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlertValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertStage AlertStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertConditionType ConditionType;
    
public:
    UQuestConditionAlertLevelType();

    UFUNCTION(BlueprintCallable)
    void OnAlertLevelChanged(FAlertLevelChangeInfo AlertLevelChange);
    
};

