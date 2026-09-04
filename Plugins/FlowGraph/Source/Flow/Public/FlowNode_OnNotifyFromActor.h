#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FlowNode_ComponentObserver.h"
#include "FlowNode_OnNotifyFromActor.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_OnNotifyFromActor : public UFlowNode_ComponentObserver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NotifyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetroactive;
    
public:
    UFlowNode_OnNotifyFromActor();

};

