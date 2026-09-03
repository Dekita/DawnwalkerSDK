#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "EQuestTimeProgressionType.h"
#include "ETimeProgressionZoneConditionType.h"
#include "QuestConditionTimeProgressionZoneType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionTimeProgressionZoneType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeProgressionZoneConditionType ConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptManual;
    
public:
    UQuestConditionTimeProgressionZoneType();

    UFUNCTION(BlueprintCallable)
    void OnTriggerNoticeStateUpdated(bool bActive, EQuestTimeProgressionType TimeProgressionType, bool bManual);
    
};

