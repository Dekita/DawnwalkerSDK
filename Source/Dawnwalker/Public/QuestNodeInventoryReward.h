#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "QuestNode.h"
#include "QuestNodeInventoryReward.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeInventoryReward : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RewardRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkAddedItemsAsNew;
    
    UQuestNodeInventoryReward();

};

