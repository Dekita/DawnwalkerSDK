#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "EConditionCheckType.h"
#include "QuestConditionItemReceivedType.generated.h"

class UItemBaseDataAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionItemReceivedType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType Condition;
    
public:
    UQuestConditionItemReceivedType();

};

