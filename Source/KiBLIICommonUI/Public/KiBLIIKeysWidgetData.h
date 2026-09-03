#pragma once
#include "CoreMinimal.h"
#include "KiBLIIKeysWidgetData.generated.h"

class UKiBLIIKeysWidget;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct KIBLIICOMMONUI_API FKiBLIIKeysWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKiBLIIKeysWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* Texture;
    
    FKiBLIIKeysWidgetData();
};

