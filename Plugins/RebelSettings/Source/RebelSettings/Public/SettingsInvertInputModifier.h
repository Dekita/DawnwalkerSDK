#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "SettingsInvertInputModifier.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELSETTINGS_API USettingsInvertInputModifier : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bY;
    
    USettingsInvertInputModifier();

};

