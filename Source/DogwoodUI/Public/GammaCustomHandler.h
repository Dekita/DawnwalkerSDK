#pragma once
#include "CoreMinimal.h"
#include "ClickCustomHandler.h"
#include "GammaCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct FGammaCustomHandler : public FClickCustomHandler {
    GENERATED_BODY()
public:
    DOGWOODUI_API FGammaCustomHandler();
};

