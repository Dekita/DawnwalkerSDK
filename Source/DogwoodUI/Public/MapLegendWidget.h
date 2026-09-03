#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Types/SlateEnums.h"
#include "MapLegendWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UMapLegendWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UMapLegendWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNavigation(EUINavigation UiNavigation);
    
};

