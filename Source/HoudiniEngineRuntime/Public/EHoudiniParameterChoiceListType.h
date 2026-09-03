#pragma once
#include "CoreMinimal.h"
#include "EHoudiniParameterChoiceListType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniParameterChoiceListType : uint8 {
    None,
    Normal,
    Mini,
    Replace,
    Toggle,
};

