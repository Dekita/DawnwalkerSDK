#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "DialoguePropAttachBonePicker.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FDialoguePropAttachBonePicker : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    FDialoguePropAttachBonePicker();
};

