#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RebelSlateFunctionLibrary.generated.h"

class UWidget;

UCLASS(Blueprintable)
class REBELUTILS_API URebelSlateFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelSlateFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void InvalidateWidget(const UWidget* InWidget, int32 Reason);
    
};

