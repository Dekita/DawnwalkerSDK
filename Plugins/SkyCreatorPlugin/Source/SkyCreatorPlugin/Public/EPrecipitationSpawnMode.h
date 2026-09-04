#pragma once
#include "CoreMinimal.h"
#include "EPrecipitationSpawnMode.generated.h"

UENUM(BlueprintType)
enum EPrecipitationSpawnMode {
    EPrecipitationSpawnMode_CPUGPU,
    EPrecipitationSpawnMode_CPU,
    EPrecipitationSpawnMode_GPU,
};

