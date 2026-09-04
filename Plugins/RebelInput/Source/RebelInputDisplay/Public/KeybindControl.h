#pragma once
#include "CoreMinimal.h"
#include "RebelSettingControlType.h"
#include "KeybindControl.generated.h"

USTRUCT(BlueprintType)
struct FKeybindControl : public FRebelSettingControlType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MappingName;
    
    REBELINPUTDISPLAY_API FKeybindControl();
};

