#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreePropertyCopyType.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreePropertyCopyType : uint8 {
    None,
    CopyPlain,
    CopyComplex,
    CopyBool,
    CopyStruct,
    CopyObject,
    CopyName,
    CopyFixedArray,
    StructReference,
    PromoteBoolToByte,
    PromoteBoolToInt32,
    PromoteBoolToUInt32,
    PromoteBoolToInt64,
    PromoteBoolToFloat,
    PromoteBoolToDouble,
    PromoteByteToInt32,
    PromoteByteToUInt32,
    PromoteByteToInt64,
    PromoteByteToFloat,
    PromoteByteToDouble,
    PromoteInt32ToInt64,
    PromoteInt32ToFloat,
    PromoteInt32ToDouble,
    PromoteUInt32ToInt64,
    PromoteUInt32ToFloat,
    PromoteUInt32ToDouble,
    PromoteFloatToInt32,
    PromoteFloatToInt64,
    PromoteFloatToDouble,
    DemoteDoubleToInt32,
    DemoteDoubleToInt64,
    DemoteDoubleToFloat,
};

