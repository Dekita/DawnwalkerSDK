#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CinematicWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UCinematicWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UCinematicWidget();

    UFUNCTION(BlueprintCallable)
    void ShowWidget(bool bShow);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowWidget(bool bInShow);
    
};

