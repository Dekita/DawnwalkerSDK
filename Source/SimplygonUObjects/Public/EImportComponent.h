#pragma once
#include "CoreMinimal.h"
#include "EImportComponent.generated.h"

UENUM(BlueprintType)
enum class EImportComponent : uint8 {
    StaticMeshComponent,
    InstancedStaticMeshComponent,
};

