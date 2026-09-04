#pragma once
#include "CoreMinimal.h"
#include "LevelSequencePlayer.h"
#include "FlowLevelSequencePlayer.generated.h"

class UFlowNode;

UCLASS(Blueprintable)
class FLOW_API UFlowLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlowNode* FlowEventReceiver;
    
public:
    UFlowLevelSequencePlayer(const FObjectInitializer& ObjectInitializer);

};

