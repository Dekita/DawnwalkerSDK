#pragma once
#include "CoreMinimal.h"
#include "EAkAudioSessionCategoryOptions.generated.h"

UENUM(BlueprintType)
enum class EAkAudioSessionCategoryOptions : uint8 {
    None = 0,
    MixWithOthers = 2,
    DuckOthers = 4,
    AllowBluetooth = 8,
    DefaultToSpeaker = 16,
    AllowBluetoothA2DP = 64,
};

