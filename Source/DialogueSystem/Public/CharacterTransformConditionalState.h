#pragma once
#include "CoreMinimal.h"
#include "CharacterTransformState.h"
#include "CharacterTransformConditionalState.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCharacterTransformConditionalState : public FCharacterTransformState {
    GENERATED_BODY()
public:
    FCharacterTransformConditionalState();
};

