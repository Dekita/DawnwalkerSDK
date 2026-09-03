#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemTooltip.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UItemTooltip : public UUserWidget {
    GENERATED_BODY()
public:
    UItemTooltip();

protected:
    UFUNCTION(BlueprintCallable)
    void RegisterInputProcessor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScrolled(float Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeregisterInputProcessor();
    
};

