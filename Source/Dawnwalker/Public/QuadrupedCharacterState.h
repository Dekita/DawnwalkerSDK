#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "QuadrupedCharacterState.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FQuadrupedCharacterState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    FQuadrupedCharacterState();
};

