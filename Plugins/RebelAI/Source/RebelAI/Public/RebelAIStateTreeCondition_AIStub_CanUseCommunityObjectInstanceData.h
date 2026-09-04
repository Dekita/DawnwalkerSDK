#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition_AIStub_InstanceData.h"
#include "RebelAIStateTreeCondition_AIStub_CanUseCommunityObjectInstanceData.generated.h"

class ACommunityObject;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_AIStub_CanUseCommunityObjectInstanceData : public FRebelAIStateTreeCondition_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACommunityObject* CommunityObject;
    
    FRebelAIStateTreeCondition_AIStub_CanUseCommunityObjectInstanceData();
};

