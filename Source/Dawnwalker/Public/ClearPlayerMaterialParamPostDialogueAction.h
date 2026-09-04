#pragma once
#include "CoreMinimal.h"
#include "OptionalPostDialogueAction.h"
#include "ECharacterMaterialParamType.h"
#include "ClearPlayerMaterialParamPostDialogueAction.generated.h"

USTRUCT(BlueprintType)
struct FClearPlayerMaterialParamPostDialogueAction : public FOptionalPostDialogueAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterMaterialParamType MaterialParam;
    
    DAWNWALKER_API FClearPlayerMaterialParamPostDialogueAction();
};

