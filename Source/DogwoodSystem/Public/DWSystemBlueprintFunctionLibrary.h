#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DWSystemBlueprintFunctionLibrary.generated.h"

class UInputMappingContext;
class UObject;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UDWSystemBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDWSystemBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetNpcLevelOverride(int32 LevelOverride);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveInputMappingContext(UObject* WorldContextObject, const UInputMappingContext* MappingContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNpcLevelOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetMaxPlayerBlood(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearAllInputTags(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddInputMappingContext(UObject* WorldContextObject, const UInputMappingContext* MappingContext, int32 Priority);
    
};

