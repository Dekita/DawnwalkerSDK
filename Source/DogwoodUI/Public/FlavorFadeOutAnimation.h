#pragma once
#include "CoreMinimal.h"
#include "TweenAnimation.h"
#include "FlavorFadeOutAnimation.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FFlavorFadeOutAnimation : public FTweenAnimation {
    GENERATED_BODY()
public:
    FFlavorFadeOutAnimation();
};

