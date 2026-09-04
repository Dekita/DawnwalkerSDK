#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "CommunityObjectMappinCacheRow.generated.h"

USTRUCT(BlueprintType)
struct FCommunityObjectMappinCacheRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MappinLocation;
    
    DOGWOODMAP_API FCommunityObjectMappinCacheRow();
};

