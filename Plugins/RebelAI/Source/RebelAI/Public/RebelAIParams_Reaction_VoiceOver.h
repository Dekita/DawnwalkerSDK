#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIParams_Reaction.h"
#include "RebelAIParams_Reaction_VoiceOver.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Reaction_VoiceOver : public FRebelAIParams_Reaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoiceSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Action;
    
    FRebelAIParams_Reaction_VoiceOver();
};

