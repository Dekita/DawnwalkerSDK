#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GamepadVibrationGroupRow.generated.h"

class UFeedbackBehavior;

USTRUCT(BlueprintType)
struct GAMEPADVIBRATION_API FGamepadVibrationGroupRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VibartionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFeedbackBehavior> FeedbackBehavior;
    
    FGamepadVibrationGroupRow();
};

