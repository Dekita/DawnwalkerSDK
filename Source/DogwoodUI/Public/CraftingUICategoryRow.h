#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CraftingUICategoryRow.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FCraftingUICategoryRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    FCraftingUICategoryRow();
};

