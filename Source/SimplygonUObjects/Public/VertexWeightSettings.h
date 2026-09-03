#pragma once
#include "CoreMinimal.h"
#include "EWeightsFromColorComponent.h"
#include "EWeightsFromColorMode.h"
#include "VertexWeightSettings.generated.h"

USTRUCT(BlueprintType)
struct SIMPLYGONUOBJECTS_API FVertexWeightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseVertexWeightsInReducer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseVertexWeightsInTexcoordGenerator: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeightsFromColorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeightsFromColorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightsFromColorComponent WeightsFromColorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightsFromColorMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightsFromColorMode WeightsFromColorMode;
    
    FVertexWeightSettings();
};

