#pragma once
#include "CoreMinimal.h"
#include "ActionPointCondition_Base.h"
#include "DawnwalkerAIActionPointCondition_ReactionOnly.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIActionPointCondition_ReactionOnly : public FActionPointCondition_Base {
    GENERATED_BODY()
public:
    FDawnwalkerAIActionPointCondition_ReactionOnly();
};

