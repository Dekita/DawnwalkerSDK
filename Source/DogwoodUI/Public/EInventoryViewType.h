#pragma once
#include "CoreMinimal.h"
#include "EInventoryViewType.generated.h"

UENUM(BlueprintType)
enum class EInventoryViewType : uint8 {
    Default,
    UpgradePanel,
    ShopPlayer,
    ShopVendor,
};

