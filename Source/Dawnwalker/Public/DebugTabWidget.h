#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "DebugTabWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UDebugTabWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabName;
    
    UDebugTabWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabHidden();
    
};

