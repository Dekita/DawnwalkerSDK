#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "DrinkBloodSequencesSet.h"
#include "DrinkBloodSequencesSets.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDrinkBloodSequencesSets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDrinkBloodSequencesSet> FocusLevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer SupportedCreatureTypes;
    
    FDrinkBloodSequencesSets();
};

