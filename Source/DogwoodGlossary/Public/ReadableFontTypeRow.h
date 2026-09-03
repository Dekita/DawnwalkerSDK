#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "ReadableFontTypeRow.generated.h"

class UCommonTextStyle;

USTRUCT(BlueprintType)
struct DOGWOODGLOSSARY_API FReadableFontTypeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> TextStyle;
    
    FReadableFontTypeRow();
};

