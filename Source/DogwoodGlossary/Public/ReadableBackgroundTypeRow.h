#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ReadableBackgroundTypeRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DOGWOODGLOSSARY_API FReadableBackgroundTypeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BackgroundTexture;
    
    FReadableBackgroundTypeRow();
};

