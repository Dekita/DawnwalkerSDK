#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactNode.h"
#include "FlowNode_AddIntValueToFact.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_AddIntValueToFact : public UFactNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactToChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueToAdd;
    
public:
    UFlowNode_AddIntValueToFact();

};

