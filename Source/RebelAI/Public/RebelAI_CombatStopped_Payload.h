#pragma once
#include "CoreMinimal.h"
#include "RebelAI_WithStub_Payload.h"
#include "RebelAI_CombatStopped_Payload.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_CombatStopped_Payload : public FRebelAI_WithStub_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSwitchToIdlePhase;
    
    FRebelAI_CombatStopped_Payload();
};

