#pragma once
#include "CoreMinimal.h"
#include "InfamyNotificationAnimation.h"
#include "InfamyOfficerAnimation.generated.h"

USTRUCT(BlueprintType)
struct FInfamyOfficerAnimation : public FInfamyNotificationAnimation {
    GENERATED_BODY()
public:
    DOGWOODUI_API FInfamyOfficerAnimation();
};

