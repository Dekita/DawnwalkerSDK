#pragma once
#include "CoreMinimal.h"
#include "EBloodDrinkingStage.h"
#include "DrinkBloodSequencesSet.generated.h"

class UFocusAbilityLevelSequence;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDrinkBloodSequencesSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFocusAbilityLevelSequence> Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBloodDrinkingStage, TSoftObjectPtr<UFocusAbilityLevelSequence>> SubSequences;
    
    FDrinkBloodSequencesSet();
};

