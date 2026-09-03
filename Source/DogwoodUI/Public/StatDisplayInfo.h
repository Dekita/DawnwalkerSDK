#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StatDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FStatDisplayInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    FStatDisplayInfo();
};

