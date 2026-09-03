#pragma once
#include "CoreMinimal.h"
#include "PickerControlBase.h"
#include "DifficultyPresetPicker.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FDifficultyPresetPicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCustom;
    
    FDifficultyPresetPicker();
};

