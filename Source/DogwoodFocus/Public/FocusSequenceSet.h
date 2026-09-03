#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "FocusSequenceSet.generated.h"

class UFocusAbilityLevelSequence;

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FFocusSequenceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFocusAbilityLevelSequence>> FocusLevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer SupportedCreatureTypes;
    
    FFocusSequenceSet();
};

