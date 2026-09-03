#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "CreatureWithTagToAbilityReact.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FCreatureWithTagToAbilityReact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer Allowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MustHaveTagsToActivateAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> ReactAbility;
    
    FCreatureWithTagToAbilityReact();
};

