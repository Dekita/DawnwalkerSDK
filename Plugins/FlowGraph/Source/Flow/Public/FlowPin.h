#pragma once
#include "CoreMinimal.h"
#include "FlowPin.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowPin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PinFriendlyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PinToolTip;
    
    FFlowPin();
};

