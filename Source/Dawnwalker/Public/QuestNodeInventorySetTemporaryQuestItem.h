#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeInventorySetTemporaryQuestItem.generated.h"

class UItemBaseDataAsset;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeInventorySetTemporaryQuestItem : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* ItemDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetAsQuestItem;
    
public:
    UQuestNodeInventorySetTemporaryQuestItem();

};

