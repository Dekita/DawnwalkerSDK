#pragma once
#include "CoreMinimal.h"
#include "InfamyNotificationAnimation.h"
#include "InfamyProgressAnimation.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FInfamyProgressAnimation : public FInfamyNotificationAnimation {
    GENERATED_BODY()
public:
    FInfamyProgressAnimation();
};

