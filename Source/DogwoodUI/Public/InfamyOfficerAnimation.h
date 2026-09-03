#pragma once
#include "CoreMinimal.h"
#include "InfamyNotificationAnimation.h"
#include "InfamyOfficerAnimation.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FInfamyOfficerAnimation : public FInfamyNotificationAnimation {
    GENERATED_BODY()
public:
    FInfamyOfficerAnimation();
};

