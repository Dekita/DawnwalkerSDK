#pragma once
#include "CoreMinimal.h"
#include "ESaveMetadataKey.generated.h"

UENUM(BlueprintType)
enum class ESaveMetadataKey : uint8 {
    Date,
    SaveName,
    Type,
    Day,
    Quest,
    PlayTime,
    ActiveQuests,
    Source,
    SourceLocation,
    WasSavingLocked,
    BuildVersion,
    GameVersion,
    SaveVersion,
    TypeString,
};

