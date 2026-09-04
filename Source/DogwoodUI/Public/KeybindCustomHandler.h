#pragma once
#include "CoreMinimal.h"
#include "ClickCustomHandler.h"
#include "KeybindCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct FKeybindCustomHandler : public FClickCustomHandler {
    GENERATED_BODY()
public:
    DOGWOODUI_API FKeybindCustomHandler();
};

