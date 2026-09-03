#pragma once
#include "CoreMinimal.h"
#include "RebelAIHandledSituations.h"
#include "RebelAILogicNode_Trigger.h"
#include "RebelAILogicNode_Trigger_SituationOccurred.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Trigger_SituationOccurred : public FRebelAILogicNode_Trigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIHandledSituations Config;
    
    FRebelAILogicNode_Trigger_SituationOccurred();
};

