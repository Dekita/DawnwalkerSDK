#pragma once
#include "CoreMinimal.h"
#include "TweenAnimation.h"
#include "FlavorFadeOutAnimation.generated.h"

USTRUCT(BlueprintType)
struct FFlavorFadeOutAnimation : public FTweenAnimation {
    GENERATED_BODY()
public:
    DOGWOODUI_API FFlavorFadeOutAnimation();
};

