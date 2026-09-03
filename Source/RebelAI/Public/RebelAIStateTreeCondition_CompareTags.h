#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition.h"
#include "RebelAIStateTreeCondition_CompareTags.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_CompareTags : public FRebelAIStateTreeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FRebelAIStateTreeCondition_CompareTags();
};

