#pragma once
#include "CoreMinimal.h"
#include "ELocalizationTextType.generated.h"

UENUM(BlueprintType)
enum class ELocalizationTextType : uint8 {
    TranslationOnly,
    VoiceOver,
};

