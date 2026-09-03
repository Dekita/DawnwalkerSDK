#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "KiBLIIFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class KIBLII_API UKiBLIIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKiBLIIFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeyEvent RemapKeyEvent_SystemToQwerty(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKeyEvent RemapKeyEvent_QwertyToSystem(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey RemapKey_QwertyToSystem(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetKeyboardLayoutsChars();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetKeyboardLayoutId();
    
};

