#pragma once
#include "CoreMinimal.h"
#include "ETargetTemplateCompatibility.generated.h"

UENUM(BlueprintType)
enum class ETargetTemplateCompatibility : uint8 {
    Valid,
    InvalidInputMesh,
    MissingImportModel,
    MissingLOD,
    MissingMeshInfo,
    MismatchNumVertices,
    MismatchStartImportedVertex,
    InvalidArchetype,
    Count,
};

