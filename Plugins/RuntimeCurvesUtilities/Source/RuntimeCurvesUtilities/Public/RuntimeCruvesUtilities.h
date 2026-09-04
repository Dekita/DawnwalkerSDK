#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "RuntimeCruvesUtilities.generated.h"

UCLASS(Blueprintable)
class RUNTIMECURVESUTILITIES_API URuntimeCruvesUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URuntimeCruvesUtilities();

    UFUNCTION(BlueprintCallable)
    static void SetValueForTimeInVectorCurve(UPARAM(Ref) FRuntimeVectorCurve& Curve, float Time, FVector Vector);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetValueForTimeInVectorCurve(FRuntimeVectorCurve Curve, float Time);
    
    UFUNCTION(BlueprintCallable)
    static float GetValueForTimeInFloatCurve(FRuntimeFloatCurve Curve, float Time);
    
};

