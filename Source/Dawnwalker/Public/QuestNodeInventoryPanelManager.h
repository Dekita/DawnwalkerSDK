#pragma once
#include "CoreMinimal.h"
#include "EInventoryFunctionalityType.h"
#include "QuestNode.h"
#include "EInventoryPanelOperationType.h"
#include "QuestNodeInventoryPanelManager.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeInventoryPanelManager : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryPanelOperationType OperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInventoryFunctionalityType> InventoryFunctionalityTypes;
    
public:
    UQuestNodeInventoryPanelManager();

};

