#pragma once
#include "CoreMinimal.h"
#include "ERebelLanguageType.h"
#include "PickerControlBase.h"
#include "LanguagePicker.generated.h"

USTRUCT(BlueprintType)
struct REBELSETTINGS_API FLanguagePicker : public FPickerControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelLanguageType Type;
    
    FLanguagePicker();
};

