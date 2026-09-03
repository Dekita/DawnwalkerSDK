#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactNode.h"
#include "FlowNode_DoesFactExist.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_DoesFactExist : public UFactNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactTag;
    
public:
    UFlowNode_DoesFactExist();

};

