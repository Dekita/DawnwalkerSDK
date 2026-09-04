#pragma once
#include "CoreMinimal.h"
#include "BlendSpacePlayerLibrary.h"
#include "SequencePlayerLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RebelLocomotionAnimGraphLibrary.generated.h"

UCLASS(Blueprintable)
class REBELLOCOMOTION_API URebelLocomotionAnimGraphLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelLocomotionAnimGraphLibrary();

    UFUNCTION(BlueprintCallable)
    static FBlendSpacePlayerReference SetStartPosition(const FBlendSpacePlayerReference& BlendSpacePlayer, float StartPosition);
    
    UFUNCTION(BlueprintCallable)
    static FBlendSpacePlayerReference SetAccumulatedTime(const FBlendSpacePlayerReference& BlendSpacePlayer, float Time);
    
    UFUNCTION(BlueprintCallable)
    static FSequencePlayerReference SeekToCurveValue(const FSequencePlayerReference& SequencePlayer, FName CurveName, float CurveValue, float SeekStartPosition, float& OutPosition, float MinCurveChangeRate, float MaxCurveChangeRate);
    
    UFUNCTION(BlueprintCallable)
    static FBlendSpacePlayerReference SeekStartPositionToCurveValue(const FBlendSpacePlayerReference& BlendSpacePlayer, FName CurveName, float CurveValue, FVector position, float SeekStartPosition, float& OutStartPosition, float MinCurveChangeRate, float MaxCurveChangeRate);
    
    UFUNCTION(BlueprintCallable)
    static FSequencePlayerReference ExtractCurveValue(const FSequencePlayerReference& SequencePlayer, FName CurveName, float& OutCurveValue);
    
    UFUNCTION(BlueprintCallable)
    static FBlendSpacePlayerReference ExtractBlendSpaceCurveValue(const FBlendSpacePlayerReference& BlendSpacePlayer, FName CurveName, float& OutCurveValue);
    
};

