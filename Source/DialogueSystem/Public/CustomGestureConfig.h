#pragma once
#include "CoreMinimal.h"
#include "CustomGestureParams.h"
#include "CustomGestureConfig.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCustomGestureConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomGestureParams Params;
    
    FCustomGestureConfig();
};

