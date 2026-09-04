#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "HumanoidCharacterState.generated.h"

USTRUCT(BlueprintType)
struct FHumanoidCharacterState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    DAWNWALKER_API FHumanoidCharacterState();
};

