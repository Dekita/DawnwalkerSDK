#pragma once
#include "CoreMinimal.h"
#include "RebelSettingControlType.h"
#include "Templates/SubclassOf.h"
#include "CustomControl.generated.h"

class URebelSettingEntryWidgetBase;

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FCustomControl : public FRebelSettingControlType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelSettingEntryWidgetBase> CustomDisplayClass;
    
    FCustomControl();
};

