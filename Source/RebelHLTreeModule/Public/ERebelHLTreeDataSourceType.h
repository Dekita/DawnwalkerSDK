#pragma once
#include "CoreMinimal.h"
#include "ERebelHLTreeDataSourceType.generated.h"

UENUM(BlueprintType)
enum class ERebelHLTreeDataSourceType : uint8 {
    None,
    GlobalInstanceData,
    GlobalInstanceDataObject,
    ActiveInstanceData,
    ActiveInstanceDataObject,
    SharedInstanceData,
    SharedInstanceDataObject,
    ContextData,
    ExternalData,
    GlobalParameterData,
    SubtreeParameterData,
    StateParameterData,
};

