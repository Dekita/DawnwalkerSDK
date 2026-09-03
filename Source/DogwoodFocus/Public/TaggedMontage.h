#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TaggedMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FTaggedMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MontageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> TaggedMontage;
    
    FTaggedMontage();
};

