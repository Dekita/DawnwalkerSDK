#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_InstigatorHasDrawnWeapon.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_InstigatorHasDrawnWeapon : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FRebelAIReactionCondition_InstigatorHasDrawnWeapon();
};

