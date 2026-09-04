#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "QuadrupedCharacterState.generated.h"

USTRUCT(BlueprintType)
struct FQuadrupedCharacterState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    DAWNWALKER_API FQuadrupedCharacterState();
};

