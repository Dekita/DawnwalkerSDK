#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "SettingsStickDeadzoneInputModifier.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELSETTINGS_API USettingsStickDeadzoneInputModifier : public UInputModifier {
    GENERATED_BODY()
public:
    USettingsStickDeadzoneInputModifier();

};

