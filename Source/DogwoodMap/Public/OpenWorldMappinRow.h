#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenWorldMappinRow.generated.h"

class UOpenWorldContent;

USTRUCT(BlueprintType)
struct DOGWOODMAP_API FOpenWorldMappinRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOpenWorldContent* OpenWorldContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MappinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MappinGuid;
    
    FOpenWorldMappinRow();
};

