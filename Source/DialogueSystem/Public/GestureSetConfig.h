#pragma once
#include "CoreMinimal.h"
#include "EGestureIntensity.h"
#include "GestureAnimationSlot.h"
#include "GestureSetConfig.generated.h"

class UGestureDatabase;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FGestureSetConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGestureDatabase> Gestures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGestureIntensity Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGestureAnimationSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    FGestureSetConfig();
};

