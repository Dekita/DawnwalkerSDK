#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DemoWidgetContextParams.h"
#include "WidgetContextObject.generated.h"

class UWidgetContextObject;

UCLASS(Blueprintable)
class DAWNWALKER_API UWidgetContextObject : public UObject {
    GENERATED_BODY()
public:
    UWidgetContextObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWidgetContextObject* MakeDemoWidgetContext(const FDemoWidgetContextParams& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDemoWidgetParams(FDemoWidgetContextParams& OutParams) const;
    
};

