#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNode_Trigger_RegistrationMode.h"
#include "RebelAILogicNode_Registrable.h"
#include "RebelAINodeReference.h"
#include "RebelAILogicNode_UseTriggers.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_UseTriggers : public FRebelAILogicNode_Registrable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAINodeReference> Triggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicNode_Trigger_RegistrationMode RegistrationMode;
    
    FRebelAILogicNode_UseTriggers();
};

