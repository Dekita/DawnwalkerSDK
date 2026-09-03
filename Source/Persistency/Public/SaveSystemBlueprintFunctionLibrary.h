#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveSystemBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class PERSISTENCY_API USaveSystemBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveSystemBlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static bool TryQuicksave();
    
    UFUNCTION(BlueprintCallable)
    static bool TryQuickload();
    
    UFUNCTION(BlueprintCallable)
    static bool LoadLastSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSavingLocked();
    
    UFUNCTION(BlueprintCallable)
    static bool HasSavesToLoad(bool bForceNoSaveListValidate);
    
};

