#pragma once
#include "CoreMinimal.h"
#include "RebelSettingCustomHandler.h"
#include "ClickCustomHandler.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FClickCustomHandler : public FRebelSettingCustomHandler {
    GENERATED_BODY()
public:
    FClickCustomHandler();
};

