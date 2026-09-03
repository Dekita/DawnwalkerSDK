#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DogwoodControlsLegendCondition.h"
#include "DogwoodControlsLegendCondition_GameplayTags.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSYSTEM_API FDogwoodControlsLegendCondition_GameplayTags : public FDogwoodControlsLegendCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForbiddenTags;
    
    FDogwoodControlsLegendCondition_GameplayTags();
};

