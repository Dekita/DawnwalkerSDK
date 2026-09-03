#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "SettingsSensitivityInputModifier.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELSETTINGS_API USettingsSensitivityInputModifier : public UInputModifier {
    GENERATED_BODY()
public:
    USettingsSensitivityInputModifier();

};

