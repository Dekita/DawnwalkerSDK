#pragma once
#include "CoreMinimal.h"
#include "EInteractableState.generated.h"

UENUM(BlueprintType)
enum class EInteractableState : uint8 {
    None,
    Disabled,
    NeedsFocus,
    Visible,
    Interactable,
};

