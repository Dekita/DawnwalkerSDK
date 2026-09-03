#pragma once
#include "CoreMinimal.h"
#include "ELootGenerationSource.generated.h"

UENUM(BlueprintType)
enum class ELootGenerationSource : uint8 {
    Default,
    CharacterDeath,
    LootPanel,
};

