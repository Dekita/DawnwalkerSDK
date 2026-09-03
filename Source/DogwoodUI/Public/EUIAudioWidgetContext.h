#pragma once
#include "CoreMinimal.h"
#include "EUIAudioWidgetContext.generated.h"

UENUM(BlueprintType)
enum class EUIAudioWidgetContext : uint8 {
    None,
    Page,
    Ability,
    ItemMaterial,
};

