#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "CinematicCharacterState.generated.h"

USTRUCT(BlueprintType)
struct FCinematicCharacterState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FCinematicCharacterState();
};

