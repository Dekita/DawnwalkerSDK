#pragma once
#include "CoreMinimal.h"
#include "MontageSetCreatureTypeBased.h"
#include "WaitingReactionMontageSet.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FWaitingReactionMontageSet : public FMontageSetCreatureTypeBased {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> WaitingMontage;
    
    FWaitingReactionMontageSet();
};

