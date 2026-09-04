#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelSpatialQueryCriterion.h"
#include "RebelSpatialQueryCriterion_Tags_HasTagExact.generated.h"

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialQueryCriterion_Tags_HasTagExact : public FRebelSpatialQueryCriterion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    FRebelSpatialQueryCriterion_Tags_HasTagExact();
};

