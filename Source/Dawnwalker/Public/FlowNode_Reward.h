#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "Engine/DataTable.h"
#include "FlowNode.h"
#include "FlowNode_Reward.generated.h"

class UInventorySubsystem;

UCLASS(Blueprintable)
class DAWNWALKER_API UFlowNode_Reward : public UFlowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECurrencyType, int32> Currencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RewardRowHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventorySubsystem* InventorySubsystem;
    
public:
    UFlowNode_Reward();

};

