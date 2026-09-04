#pragma once
#include "CoreMinimal.h"
#include "RebelSettingCustomHandler.h"
#include "ClickCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct FClickCustomHandler : public FRebelSettingCustomHandler {
    GENERATED_BODY()
public:
    REBELSETTINGS_API FClickCustomHandler();
};

