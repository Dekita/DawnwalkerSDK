#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CourtTileColorPalette.generated.h"

USTRUCT(BlueprintType)
struct FCourtTileColorPalette {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SecondaryColor;
    
    DOGWOODUI_API FCourtTileColorPalette();
};

