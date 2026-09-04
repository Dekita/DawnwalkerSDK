#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "CharacterTransformState.generated.h"

USTRUCT(BlueprintType)
struct FCharacterTransformState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FCharacterTransformState();
};

