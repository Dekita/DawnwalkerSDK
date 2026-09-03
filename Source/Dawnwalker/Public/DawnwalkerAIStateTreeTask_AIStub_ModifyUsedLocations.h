#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_AIStub.h"
#include "ERebelAIStateTreeTask_AIStub_ModifyUsedLocations_OperationType.h"
#include "DawnwalkerAIStateTreeTask_AIStub_ModifyUsedLocations.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIStateTreeTask_AIStub_ModifyUsedLocations : public FRebelAIStateTreeTask_AIStub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIStateTreeTask_AIStub_ModifyUsedLocations_OperationType Operation;
    
    FDawnwalkerAIStateTreeTask_AIStub_ModifyUsedLocations();
};

