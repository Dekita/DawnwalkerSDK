#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "CollisionProfileState.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCollisionProfileState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    FCollisionProfileState();
};

