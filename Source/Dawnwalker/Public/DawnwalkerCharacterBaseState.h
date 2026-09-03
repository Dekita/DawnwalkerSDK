#pragma once
#include "CoreMinimal.h"
#include "CharacterStateBase.h"
#include "DawnwalkerCharacterBaseState.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerCharacterBaseState : public FCharacterStateBase {
    GENERATED_BODY()
public:
    FDawnwalkerCharacterBaseState();
};

