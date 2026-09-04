#pragma once
#include "CoreMinimal.h"
#include "ERebelInvalidationReason.generated.h"

UENUM(BlueprintType)
enum class ERebelInvalidationReason : uint8 {
    None,
    Layout,
    Paint,
    Volatility = 4,
    ChildOrder = 8,
    RenderTransform = 16,
    Visibility = 32,
    AttributeRegistration = 64,
    Prepass = 128,
};

