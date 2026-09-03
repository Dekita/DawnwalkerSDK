#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EDialogFunctionReturnValue.h"
#include "DialogObjectLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class DAWNWALKER_API UDialogObjectLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDialogObjectLibrary();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIntFact(const UObject* WorldContextObject, FGameplayTag Tag, int32 NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetBoolFact(const UObject* WorldContextObject, FGameplayTag Tag, bool bNewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BoolFactBranch(const UObject* WorldContextObject, FGameplayTag Tag, EDialogFunctionReturnValue& RetValue);
    
};

