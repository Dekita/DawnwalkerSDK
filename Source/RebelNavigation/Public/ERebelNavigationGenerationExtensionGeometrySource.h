#pragma once
#include "CoreMinimal.h"
#include "ERebelNavigationGenerationExtensionGeometrySource.generated.h"

UENUM(BlueprintType)
enum class ERebelNavigationGenerationExtensionGeometrySource : uint8 {
    Box,
    SimpleMeshConvex,
    ComplexMeshConvex,
    SimpleMesh,
};

