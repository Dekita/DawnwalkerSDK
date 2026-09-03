#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DWTraitDataRow.generated.h"

class UTraitAsset;

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FDWTraitDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTraitAsset> Trait;
    
    FDWTraitDataRow();
};

