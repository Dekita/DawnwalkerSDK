#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "EConditionCheckType.h"
#include "QuestConditionEnemyLevelDiffType.generated.h"

class UDataTable;
class URebelAIStub;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionEnemyLevelDiffType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> LevelDifferenceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelDifferenceTableEntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelDifferenceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType Condition;
    
public:
    UQuestConditionEnemyLevelDiffType();

    UFUNCTION(BlueprintCallable)
    void CheckEnemyLevelDifference(const URebelAIStub* Attacker, const URebelAIStub* Defender);
    
};

