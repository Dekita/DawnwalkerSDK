#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIParams_Reaction.h"
#include "RebelAIParams_Reaction_HideFromFight.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Reaction_HideFromFight : public FRebelAIParams_Reaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoiceOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromFight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontRunFromFriendlies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysRunFromPlayer;
    
    FRebelAIParams_Reaction_HideFromFight();
};

