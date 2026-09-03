#pragma once
#include "CoreMinimal.h"
#include "FRebelGeomProcessorDebugLeafType.generated.h"

UENUM(BlueprintType)
enum class FRebelGeomProcessorDebugLeafType : uint8 {
    None,
    EmptyLeaf,
    SingleByChannel,
    SingleByObjectType,
    MultiByChannel,
};

