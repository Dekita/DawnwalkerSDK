#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "CourtWidgetBase.generated.h"

class UCourtTooltipBase;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCourtWidgetBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCourtTooltipBase* ToolTip;
    
    UCourtWidgetBase();

    UFUNCTION(BlueprintCallable)
    void DisableInputDuringEdictAnimation(UWidgetAnimation* InEdictFadeAnimation);
    
};

