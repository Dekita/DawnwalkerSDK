#pragma once
#include "CoreMinimal.h"
#include "ERebelGenericTreeNodeDecoratorCompareResult.generated.h"

UENUM(BlueprintType)
enum class ERebelGenericTreeNodeDecoratorCompareResult : uint8 {
    Same,
    DifferentDecorator,
    DifferentData,
};

