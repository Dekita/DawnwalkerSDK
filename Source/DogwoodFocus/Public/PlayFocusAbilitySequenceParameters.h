#pragma once
#include "CoreMinimal.h"
#include "PlayFocusAbilitySequenceParameters.generated.h"

class AActor;
class UFocusAbilityLevelSequence;

USTRUCT(BlueprintType)
struct FPlayFocusAbilitySequenceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFocusAbilityLevelSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TaggedTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TaggedPlayerActor;
    
    DOGWOODFOCUS_API FPlayFocusAbilitySequenceParameters();
};

