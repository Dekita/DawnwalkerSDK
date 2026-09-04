#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConnectedPin.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FConnectedPin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NodeGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PinName;
    
    FConnectedPin();
};

