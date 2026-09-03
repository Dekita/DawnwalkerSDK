#pragma once
#include "CoreMinimal.h"
#include "InfamyNotificationAnimation.h"
#include "InfamyEdictAnimation.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FInfamyEdictAnimation : public FInfamyNotificationAnimation {
    GENERATED_BODY()
public:
    FInfamyEdictAnimation();
};

