#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition_AIStub.h"
#include "RebelAIStateTreeCondition_AIStub_IsInGuardArea.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_AIStub_IsInGuardArea : public FRebelAIStateTreeCondition_AIStub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FRebelAIStateTreeCondition_AIStub_IsInGuardArea();
};

