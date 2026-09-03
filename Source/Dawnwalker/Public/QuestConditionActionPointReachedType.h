#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "Engine/DataTable.h"
#include "QuestConditionActionPointReachedType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionActionPointReachedType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CommunityDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeout;
    
public:
    UQuestConditionActionPointReachedType();

};

