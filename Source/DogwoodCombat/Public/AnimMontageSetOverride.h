#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "GameplayTagContainer.h"
#include "AnimMontageSet.h"
#include "AnimMontageSetOverride.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FAnimMontageSetOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer Creatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimMontageSet Anims;
    
    FAnimMontageSetOverride();
};

