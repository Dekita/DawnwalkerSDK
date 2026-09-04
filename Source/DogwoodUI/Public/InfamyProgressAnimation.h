#pragma once
#include "CoreMinimal.h"
#include "InfamyNotificationAnimation.h"
#include "InfamyProgressAnimation.generated.h"

USTRUCT(BlueprintType)
struct FInfamyProgressAnimation : public FInfamyNotificationAnimation {
    GENERATED_BODY()
public:
    DOGWOODUI_API FInfamyProgressAnimation();
};

