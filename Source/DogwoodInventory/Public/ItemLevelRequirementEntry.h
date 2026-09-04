#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemLevelRequirementEntry.generated.h"

USTRUCT(BlueprintType)
struct FItemLevelRequirementEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range LevelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpreadValue;
    
    DOGWOODINVENTORY_API FItemLevelRequirementEntry();
};

