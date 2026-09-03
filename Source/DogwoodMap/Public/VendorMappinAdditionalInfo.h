#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OpenWorldMappinAdditionalInfo.h"
#include "VendorMappinAdditionalInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODMAP_API UVendorMappinAdditionalInfo : public UOpenWorldMappinAdditionalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> VendorItemCategories;
    
    UVendorMappinAdditionalInfo();

};

