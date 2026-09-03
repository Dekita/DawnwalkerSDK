#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "CharacterTransformState.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCharacterTransformState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    FCharacterTransformState();
};

