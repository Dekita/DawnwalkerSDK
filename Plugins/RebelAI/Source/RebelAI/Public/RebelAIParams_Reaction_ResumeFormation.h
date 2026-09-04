#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIParams_Reaction.h"
#include "RebelAIParams_Reaction_ResumeFormation.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Reaction_ResumeFormation : public FRebelAIParams_Reaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoiceOver;
    
    FRebelAIParams_Reaction_ResumeFormation();
};

