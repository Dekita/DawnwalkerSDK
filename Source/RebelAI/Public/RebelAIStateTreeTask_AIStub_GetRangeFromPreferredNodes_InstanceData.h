#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StateTreePropertyRef.h"
#include "RebelAIStateTreeTask_LogicTree_InstanceData.h"
#include "RebelAIStateTreeTask_AIStub_GetRangeFromPreferredNodes_InstanceData.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_GetRangeFromPreferredNodes_InstanceData : public FRebelAIStateTreeTask_LogicTree_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Target;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyRef ResultRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyRef ResultMidRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NodeTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrioritisedAlias;
    
    FRebelAIStateTreeTask_AIStub_GetRangeFromPreferredNodes_InstanceData();
};

