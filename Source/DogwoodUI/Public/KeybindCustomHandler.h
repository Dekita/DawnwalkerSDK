#pragma once
#include "CoreMinimal.h"
#include "ClickCustomHandler.h"
#include "KeybindCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FKeybindCustomHandler : public FClickCustomHandler {
    GENERATED_BODY()
public:
    FKeybindCustomHandler();
};

