#pragma once
#include "CoreMinimal.h"
#include "RebelAIEvent.h"
#include "RebelAIRecentEvents.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIRecentEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIEvent AttackStartedAgainstMe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIEvent AttackHitMe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIEvent MyAttackWasDefended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIEvent MyAttackHitEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIEvent ExitedVats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIEvent HitFromWorldDirection;
    
    FRebelAIRecentEvents();
};

