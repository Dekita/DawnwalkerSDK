#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DWTraitDataRow.generated.h"

class UTraitAsset;

USTRUCT(BlueprintType)
struct FDWTraitDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTraitAsset> Trait;
    
    DOGWOODCHARACTERDEVELOPMENT_API FDWTraitDataRow();
};

