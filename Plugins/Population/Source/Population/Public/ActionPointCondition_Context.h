#pragma once
#include "CoreMinimal.h"
#include "CommunityObject_Context.h"
#include "ActionPointCondition_Context.generated.h"

USTRUCT(BlueprintType)
struct POPULATION_API FActionPointCondition_Context : public FCommunityObject_Context {
    GENERATED_BODY()
public:
    FActionPointCondition_Context();
};

