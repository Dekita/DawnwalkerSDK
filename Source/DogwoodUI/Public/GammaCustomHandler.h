#pragma once
#include "CoreMinimal.h"
#include "ClickCustomHandler.h"
#include "GammaCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FGammaCustomHandler : public FClickCustomHandler {
    GENERATED_BODY()
public:
    FGammaCustomHandler();
};

