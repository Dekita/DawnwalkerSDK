#pragma once
#include "CoreMinimal.h"
#include "MaskEvent.h"
#include "MaskEvents.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FMaskEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaskEvent> Events;
    
    FMaskEvents();
};

