#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClipboardExtensionBPLibrary.generated.h"

UCLASS(Blueprintable)
class CLIPBOARDEXTENSION_API UClipboardExtensionBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UClipboardExtensionBPLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetClipboard();
    
    UFUNCTION(BlueprintCallable)
    static void CopyToClipboard(const FString& Text);
    
};

