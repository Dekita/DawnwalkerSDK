#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "DWCommonRichTextStyleClassRow.generated.h"

class UCommonTextStyle;

USTRUCT(BlueprintType)
struct DOGWOODUI_API FDWCommonRichTextStyleClassRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> TextStyleClass;
    
    FDWCommonRichTextStyleClassRow();
};

