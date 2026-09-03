#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "MainMenuBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UMainMenuBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UMainMenuBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSaveListModified();
    
    UFUNCTION(BlueprintCallable)
    void BlockInputDuringMenuTransition(float duration);
    
};

