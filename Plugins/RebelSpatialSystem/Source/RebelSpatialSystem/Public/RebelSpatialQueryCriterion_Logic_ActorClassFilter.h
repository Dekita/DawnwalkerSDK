#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialQueryCriterion.h"
#include "Templates/SubclassOf.h"
#include "RebelSpatialQueryCriterion_Logic_ActorClassFilter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialQueryCriterion_Logic_ActorClassFilter : public FRebelSpatialQueryCriterion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    FRebelSpatialQueryCriterion_Logic_ActorClassFilter();
};

