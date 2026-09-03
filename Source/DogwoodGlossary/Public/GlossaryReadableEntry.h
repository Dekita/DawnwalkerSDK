#pragma once
#include "CoreMinimal.h"
#include "EReadableCategory.h"
#include "GlossaryReadableEntry.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODGLOSSARY_API FGlossaryReadableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReadableCategory EntryCategory;
    
    FGlossaryReadableEntry();
};

