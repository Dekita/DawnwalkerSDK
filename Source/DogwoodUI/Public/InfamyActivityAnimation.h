#pragma once
#include "CoreMinimal.h"
#include "InfamyNotificationAnimation.h"
#include "InfamyActivityAnimation.generated.h"

USTRUCT(BlueprintType)
struct FInfamyActivityAnimation : public FInfamyNotificationAnimation {
    GENERATED_BODY()
public:
    DOGWOODUI_API FInfamyActivityAnimation();
};

