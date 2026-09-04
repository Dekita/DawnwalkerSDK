#pragma once
#include "CoreMinimal.h"
#include "EGestureIntensity.h"
#include "GestureSetEntry.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FGestureSetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequence> Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGestureIntensity Intensity;
    
    FGestureSetEntry();
};

