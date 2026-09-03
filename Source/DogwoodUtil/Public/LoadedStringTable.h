#pragma once
#include "CoreMinimal.h"
#include "LoadedStringTable.generated.h"

class UStringTable;

USTRUCT(BlueprintType)
struct DOGWOODUTIL_API FLoadedStringTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStringTable* StringTable;
    
    FLoadedStringTable();
};

