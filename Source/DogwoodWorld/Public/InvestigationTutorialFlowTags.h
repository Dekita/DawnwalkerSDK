#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InvestigationTutorialFlowTags.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODWORLD_API FInvestigationTutorialFlowTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InvestigationStartedFact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AllInteractionsFinishedFact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InvestigationExitFact;
    
    FInvestigationTutorialFlowTags();
};

