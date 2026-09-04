#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "MappedRebelInput.h"
#include "RebelSettingEntry.h"
#include "RebelInputDisplayBlueprintFunctionLibrary.generated.h"

class URebelInputMappingSubsystem;

UCLASS(Blueprintable)
class REBELINPUTDISPLAY_API URebelInputDisplayBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelInputDisplayBlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRichDisplayTextForKey(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMappedRebelInput GetKeyFromBindingSetting(const URebelInputMappingSubsystem* InSystem, const FRebelSettingEntry& InEntry, bool bIncludePending);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMappedRebelInput GetKeyFromBindingName(const URebelInputMappingSubsystem* InSystem, const FName& InName, bool bIncludePending);
    
};

