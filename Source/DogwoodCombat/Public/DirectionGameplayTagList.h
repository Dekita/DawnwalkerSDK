#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DirectionGameplayTagList.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FDirectionGameplayTagList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MainDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OptionalDirections;
    
    FDirectionGameplayTagList();
};

