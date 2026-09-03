#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "FlowNode.h"
#include "FlowNode_AddItemsToInventory.generated.h"

class UItemBaseDataAsset;

UCLASS(Blueprintable)
class DAWNWALKER_API UFlowNode_AddItemsToInventory : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UItemBaseDataAsset*, int32> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECurrencyType, int32> Currencies;
    
public:
    UFlowNode_AddItemsToInventory();

};

