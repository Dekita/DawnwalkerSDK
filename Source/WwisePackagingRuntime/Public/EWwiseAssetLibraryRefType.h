#pragma once
#include "CoreMinimal.h"
#include "EWwiseAssetLibraryRefType.generated.h"

UENUM()
enum class EWwiseAssetLibraryRefType : int32 {
    Unknown,
    InitBank,
    SoundBank,
    Media,
    ExternalSource,
};

