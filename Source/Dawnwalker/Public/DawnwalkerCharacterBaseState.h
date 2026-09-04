#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "DawnwalkerCharacterBaseState.generated.h"

USTRUCT(BlueprintType)
struct FDawnwalkerCharacterBaseState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    DAWNWALKER_API FDawnwalkerCharacterBaseState();
};

