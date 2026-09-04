#pragma once
#include "CoreMinimal.h"
#include "CharacterTransformState.h"
#include "CharacterTransformConditionalState.generated.h"

USTRUCT(BlueprintType)
struct FCharacterTransformConditionalState : public FCharacterTransformState {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FCharacterTransformConditionalState();
};

