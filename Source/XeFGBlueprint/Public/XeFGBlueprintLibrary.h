#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EXeFGMode.h"
#include "EXeFGUICompositionState.h"
#include "XeFGBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class XEFGBLUEPRINT_API UXeFGBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXeFGBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetXeFGUICompositionState(EXeFGUICompositionState State);
    
    UFUNCTION(BlueprintCallable)
    static void SetXeFGMode(EXeFGMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsXeFGSupported();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IfRelaunchRequiredByXeFG();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EXeFGUICompositionState GetXeFGUICompositionState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EXeFGMode GetXeFGMode();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EXeFGMode> GetSupportedXeFGModes();
    
};

