#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_GuardArea_InvestigatorInsideArea.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_GuardArea_InvestigatorInsideArea : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FDawnwalkerAIReactionCondition_GuardArea_InvestigatorInsideArea();
};

