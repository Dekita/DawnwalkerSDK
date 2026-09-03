#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "PausableActivatableWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UPausableActivatableWidget : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UPausableActivatableWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UnbindFromPauseAction();
    
};

