#pragma once
#include "CoreMinimal.h"
#include "FocusCreatureSequenceSet.generated.h"

class UFocusAbilityLevelSequence;

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FFocusCreatureSequenceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFocusAbilityLevelSequence>> FocusLevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOverrideDeathAnimationIfTargetDies;
    
    FFocusCreatureSequenceSet();
};

