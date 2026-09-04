#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIStateTreeTask_AIStub.h"
#include "RebelAIStateTreeTask_AIStub_SetCharacterState.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_SetCharacterState : public FRebelAIStateTreeTask_AIStub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestorePreviousStateOnExit;
    
    FRebelAIStateTreeTask_AIStub_SetCharacterState();
};

