#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactNode.h"
#include "FlowNode_SetFactInt.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_SetFactInt : public UFactNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    UFlowNode_SetFactInt();

};

