#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "QuestConditionPingType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionPingType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PingName;
    
public:
    UQuestConditionPingType();

};

