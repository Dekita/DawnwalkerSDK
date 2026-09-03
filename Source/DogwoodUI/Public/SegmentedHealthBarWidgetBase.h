#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SegmentedHealthBarWidgetBase.generated.h"

class UDynamicEntryBox;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API USegmentedHealthBarWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* SegmentEntryBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SegmentCount;
    
public:
    USegmentedHealthBarWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDesignerEntryCreated(UUserWidget* InWidget);
    
};

