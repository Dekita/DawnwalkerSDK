#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "FlowNode.h"
#include "FlowNode_RemoveItemsFromInventory.generated.h"

class UInventorySubsystem;
class UItemBaseDataAsset;

UCLASS(Blueprintable)
class DAWNWALKER_API UFlowNode_RemoveItemsFromInventory : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UItemBaseDataAsset*, int32> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECurrencyType, int32> Currencies;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventorySubsystem* InventorySubsystem;
    
public:
    UFlowNode_RemoveItemsFromInventory();

};

