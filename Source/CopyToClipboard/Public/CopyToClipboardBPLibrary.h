#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CopyToClipboardBPLibrary.generated.h"

UCLASS(Blueprintable)
class COPYTOCLIPBOARD_API UCopyToClipboardBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCopyToClipboardBPLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboard(const FString& Text);
    
};

