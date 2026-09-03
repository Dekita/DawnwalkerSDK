#pragma once
#include "CoreMinimal.h"
#include "EHoudiniStaticMeshMethod.generated.h"

UENUM(BlueprintType)
enum class EHoudiniStaticMeshMethod : uint8 {
    RawMesh_DELETED,
    FMeshDescription,
    UHoudiniStaticMesh,
};

