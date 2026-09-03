#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreePropertyAccessType.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreePropertyAccessType : uint8 {
    Offset,
    Object,
    WeakObject,
    SoftObject,
    ObjectInstance,
    StructInstance,
    IndexArray,
};

