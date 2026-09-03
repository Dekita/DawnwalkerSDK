#pragma once
#include "CoreMinimal.h"
#include "UIWidgetConfig.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FUIWidgetConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPauseGameOnShow;
    
    FUIWidgetConfig();
};

