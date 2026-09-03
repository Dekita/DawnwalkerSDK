#pragma once
#include "CoreMinimal.h"
#include "CourtTileUISetup.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct DOGWOODUI_API FCourtTileUISetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* OutlineFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* HoverFrame;
    
    FCourtTileUISetup();
};

