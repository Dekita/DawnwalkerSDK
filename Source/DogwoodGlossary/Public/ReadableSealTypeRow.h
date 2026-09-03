#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ReadableSealTypeRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DOGWOODGLOSSARY_API FReadableSealTypeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SealTexture;
    
    FReadableSealTypeRow();
};

