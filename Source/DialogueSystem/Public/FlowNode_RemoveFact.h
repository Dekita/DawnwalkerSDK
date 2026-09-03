#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactNode.h"
#include "FlowNode_RemoveFact.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_RemoveFact : public UFactNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactTagToRemove;
    
public:
    UFlowNode_RemoveFact();

};

