#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DWItemDataRow.generated.h"

class UItemBaseDataAsset;

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FDWItemDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UItemBaseDataAsset> Item;
    
    FDWItemDataRow();
};

