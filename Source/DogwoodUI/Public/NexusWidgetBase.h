#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "NexusWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UNexusWidgetBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomNav;
    
    UNexusWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestClose();
    
};

