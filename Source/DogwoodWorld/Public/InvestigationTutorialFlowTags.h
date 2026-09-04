#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InvestigationTutorialFlowTags.generated.h"

USTRUCT(BlueprintType)
struct FInvestigationTutorialFlowTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InvestigationStartedFact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AllInteractionsFinishedFact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InvestigationExitFact;
    
    DOGWOODWORLD_API FInvestigationTutorialFlowTags();
};

