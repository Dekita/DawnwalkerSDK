#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "CollisionProfileState.generated.h"

USTRUCT(BlueprintType)
struct FCollisionProfileState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    DIALOGUESYSTEM_API FCollisionProfileState();
};

