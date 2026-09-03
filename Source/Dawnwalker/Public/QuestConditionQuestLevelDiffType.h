#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "Engine/DataTable.h"
#include "QuestConditionQuestLevelDiffType.generated.h"

class UQuest;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionQuestLevelDiffType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LevelDifferenceEntryRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptHigherDifferences;
    
public:
    UQuestConditionQuestLevelDiffType();

    UFUNCTION(BlueprintCallable)
    void OnQuestAdded(const UQuest* Quest, bool bSilent);
    
};

