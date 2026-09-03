#pragma once
#include "CoreMinimal.h"
#include "EInventoryListItemType.generated.h"

UENUM(BlueprintType)
enum class EInventoryListItemType : uint8 {
    EmptyPadding,
    Item,
};

