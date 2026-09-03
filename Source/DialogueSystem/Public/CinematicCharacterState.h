#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "CinematicCharacterState.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCinematicCharacterState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    FCinematicCharacterState();
};

