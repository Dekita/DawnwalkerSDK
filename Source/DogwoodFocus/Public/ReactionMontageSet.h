#pragma once
#include "CoreMinimal.h"
#include "ReactionMontageSet.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FReactionMontageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipDeathAnimationAfterThis;
    
    FReactionMontageSet();
};

