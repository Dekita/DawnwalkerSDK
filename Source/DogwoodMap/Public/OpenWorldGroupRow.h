#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OpenWorldGroupRow.generated.h"

class UOpenWorldContent;

USTRUCT(BlueprintType)
struct DOGWOODMAP_API FOpenWorldGroupRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOpenWorldContent* OpenWorldContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GroupGuid;
    
    FOpenWorldGroupRow();
};

