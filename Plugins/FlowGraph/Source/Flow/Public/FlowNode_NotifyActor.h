#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFlowNetMode.h"
#include "FlowNode.h"
#include "FlowNode_NotifyActor.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_NotifyActor : public UFlowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IdentityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExactMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NotifyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlowNetMode NetMode;
    
public:
    UFlowNode_NotifyActor();

};

