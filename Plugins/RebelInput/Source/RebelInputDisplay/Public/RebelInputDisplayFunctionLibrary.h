#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "RebelInputDisplayFunctionLibrary.generated.h"

class UInputAction;
class UObject;

UCLASS(Blueprintable)
class REBELINPUTDISPLAY_API URebelInputDisplayFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelInputDisplayFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static FSlateBrush GetUIActionIcon(const UObject* InWorldContext, const TArray<FDataTableRowHandle>& InputActions, const int32 DirectionMask, bool bCheckAllAvailableSets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static FSlateBrush GetKeyIcon(const UObject* InWorldContext, const FKey& Key, const int32 DirectionMask, bool bCheckAllAvailableSets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static FSlateBrush GetInputActionIcon(const UObject* InWorldContext, const UInputAction* InputAction, const int32 DirectionMask, bool bCheckAllAvailableSets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static TArray<FSlateBrush> GetAllInputActionIconsInCurrentSet(const UObject* InWorldContext, const UInputAction* InputAction, const int32 DirectionMask);
    
};

