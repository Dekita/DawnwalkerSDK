#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "ESpawnCondition.h"
#include "QuestConditionSpawnType.generated.h"

class UDataTable;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionSpawnType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnCondition Condition;
    
public:
    UQuestConditionSpawnType();

private:
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetEntryNameOptions() const;
    
};

