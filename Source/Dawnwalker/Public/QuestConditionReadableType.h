#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "QuestConditionReadableType.generated.h"

class UReadableDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionReadableType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UReadableDataAsset> ReadableAsset;
    
public:
    UQuestConditionReadableType();

    UFUNCTION(BlueprintCallable)
    void OnViewedReadablesUpdated();
    
};

