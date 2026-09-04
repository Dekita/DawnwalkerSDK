#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_AIStub_InstanceData.h"
#include "RebelAIStateTreeTask_AIStub_UseCommunityObject_InstanceData.generated.h"

class ACommunityObject;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_UseCommunityObject_InstanceData : public FRebelAIStateTreeTask_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACommunityObject* CommunityObject;
    
    FRebelAIStateTreeTask_AIStub_UseCommunityObject_InstanceData();
};

