#pragma once
#include "CoreMinimal.h"
#include "TweenAnimation.h"
#include "FlavorFadeInAnimation.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FFlavorFadeInAnimation : public FTweenAnimation {
    GENERATED_BODY()
public:
    FFlavorFadeInAnimation();
};

