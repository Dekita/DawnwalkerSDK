#pragma once
#include "CoreMinimal.h"
#include "InfamyNotificationAnimation.h"
#include "InfamyActivityAnimation.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FInfamyActivityAnimation : public FInfamyNotificationAnimation {
    GENERATED_BODY()
public:
    FInfamyActivityAnimation();
};

