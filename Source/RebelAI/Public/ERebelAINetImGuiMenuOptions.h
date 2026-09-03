#pragma once
#include "CoreMinimal.h"
#include "ERebelAINetImGuiMenuOptions.generated.h"

UENUM(BlueprintType)
enum class ERebelAINetImGuiMenuOptions : uint8 {
    Names,
    PawnPicker,
    AIInfo,
    AIBoard,
    LogicTree,
    LogicTreeAdvanced_InstanceDataStorage,
    Aggression,
    Services,
    Reactions,
    ReactionController,
    Animations,
    Actions,
    Events,
    Count,
};

