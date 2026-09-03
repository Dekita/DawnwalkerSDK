#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "HudQuickslotsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UHudQuickslotsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UHudQuickslotsWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVampireSprintChanged(FGameplayTag GameplayTag, int32 TagCount);
    
};

