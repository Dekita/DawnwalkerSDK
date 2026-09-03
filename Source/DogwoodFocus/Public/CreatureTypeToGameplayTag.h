#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "GameplayTagContainer.h"
#include "CreatureTypeToGameplayTag.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FCreatureTypeToGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer Allowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    FCreatureTypeToGameplayTag();
};

