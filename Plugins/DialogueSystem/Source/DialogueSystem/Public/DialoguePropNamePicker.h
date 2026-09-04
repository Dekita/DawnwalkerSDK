#pragma once
#include "CoreMinimal.h"
#include "RestrictedFNamePicker.h"
#include "DialoguePropNamePicker.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FDialoguePropNamePicker : public FRestrictedFNamePicker {
    GENERATED_BODY()
public:
    FDialoguePropNamePicker();
};

