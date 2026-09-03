#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "RebelInputRow.h"
#include "RebelInputFunctionLibrary.generated.h"

class URebelInputMappingSubsystem;
class URebelInputPreset;

UCLASS(Blueprintable)
class REBELINPUT_API URebelInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelInputFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FRebelInputRow> GetPrioritizedInputsForKey(const URebelInputMappingSubsystem* InRebelInputSystem, const URebelInputPreset* InPreset, const FKey& InKey);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAvailableActionNames();
    
    UFUNCTION(BlueprintCallable)
    static void DisableInputForDuration(float duration);
    
};

