#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECurrencyType.h"
#include "CurrencyRow.generated.h"

class UItemBaseDataAsset;

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FCurrencyRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* CurrencyItem;
    
    FCurrencyRow();
};

