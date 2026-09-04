#pragma once
#include "CoreMinimal.h"
#include "LoadedStringTable.generated.h"

class UStringTable;

USTRUCT(BlueprintType)
struct FLoadedStringTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStringTable* StringTable;
    
    DOGWOODUTIL_API FLoadedStringTable();
};

