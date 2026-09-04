#pragma once
#include "CoreMinimal.h"
#include "TweenAnimation.h"
#include "FlavorFadeInAnimation.generated.h"

USTRUCT(BlueprintType)
struct FFlavorFadeInAnimation : public FTweenAnimation {
    GENERATED_BODY()
public:
    DOGWOODUI_API FFlavorFadeInAnimation();
};

