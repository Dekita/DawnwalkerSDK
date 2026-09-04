#pragma once
#include "CoreMinimal.h"
#include "InfamyNotificationAnimation.h"
#include "InfamyEdictAnimation.generated.h"

USTRUCT(BlueprintType)
struct FInfamyEdictAnimation : public FInfamyNotificationAnimation {
    GENERATED_BODY()
public:
    DOGWOODUI_API FInfamyEdictAnimation();
};

