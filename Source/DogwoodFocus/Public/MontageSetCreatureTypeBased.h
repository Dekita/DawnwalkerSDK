#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "GameplayTagContainer.h"
#include "MontageSetCreatureTypeBased.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FMontageSetCreatureTypeBased {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer Allowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MustHaveTargetTags;
    
    FMontageSetCreatureTypeBased();
};

