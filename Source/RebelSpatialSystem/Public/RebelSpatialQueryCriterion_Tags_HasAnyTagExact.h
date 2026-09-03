#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelSpatialQueryCriterion.h"
#include "RebelSpatialQueryCriterion_Tags_HasAnyTagExact.generated.h"

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialQueryCriterion_Tags_HasAnyTagExact : public FRebelSpatialQueryCriterion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    FRebelSpatialQueryCriterion_Tags_HasAnyTagExact();
};

