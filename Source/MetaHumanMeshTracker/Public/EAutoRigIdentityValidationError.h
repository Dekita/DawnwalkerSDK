#pragma once
#include "CoreMinimal.h"
#include "EAutoRigIdentityValidationError.generated.h"

UENUM(BlueprintType)
enum class EAutoRigIdentityValidationError : uint8 {
    None,
    BodyNotSelected,
    BodyIndexInvalid,
    EmptyConformalMesh,
    MeshNotConformed,
    NoFacePart,
};

