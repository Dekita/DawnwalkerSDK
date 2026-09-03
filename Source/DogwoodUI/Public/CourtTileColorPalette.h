#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CourtTileColorPalette.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FCourtTileColorPalette {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SecondaryColor;
    
    FCourtTileColorPalette();
};

