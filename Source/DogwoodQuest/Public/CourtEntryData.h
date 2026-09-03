#pragma once
#include "CoreMinimal.h"
#include "ECourtEntryType.h"
#include "CourtEntryData.generated.h"

class UCourtEntry;

USTRUCT(BlueprintType)
struct DOGWOODQUEST_API FCourtEntryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECourtEntryType EntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCourtEntry* LoadedEntry;
    
    FCourtEntryData();
};

