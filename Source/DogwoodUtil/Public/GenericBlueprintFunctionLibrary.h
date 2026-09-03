#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class DOGWOODUTIL_API UGenericBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGenericBlueprintFunctionLibrary();

    UFUNCTION(BlueprintPure)
    static void WorldDistanceToText(const double& InDistance, FText& OutText);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayGamma(float InGamma);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNetCompatibleChangelist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDisplayGamma();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor ConvertSRGBToLinear(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor ConvertLinearToSRGB(const FLinearColor& InColor);
    
};

