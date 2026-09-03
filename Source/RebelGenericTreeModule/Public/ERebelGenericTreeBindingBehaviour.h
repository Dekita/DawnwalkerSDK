#pragma once
#include "CoreMinimal.h"
#include "ERebelGenericTreeBindingBehaviour.generated.h"

UENUM(BlueprintType)
enum class ERebelGenericTreeBindingBehaviour : uint8 {
    Replace,
    Add,
    Multiply,
};

