#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DWCustomTickUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UDWCustomTickUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDWCustomTickUserWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetCustomTickEnabled(bool bValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CustomTick(double CurrentTime, float DeltaTime);
    
};

