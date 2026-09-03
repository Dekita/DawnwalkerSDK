#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "HumanoidCharacterState.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FHumanoidCharacterState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    FHumanoidCharacterState();
};

