#pragma once
#include "CoreMinimal.h"
#include "ESimplygonMetaTagType.generated.h"

UENUM(BlueprintType)
enum class ESimplygonMetaTagType : uint8 {
    None,
    Process,
    Occluder,
    ClippingGeometry,
    GeometryCameraPath,
    ExcludeFromImposterGeneration,
};

