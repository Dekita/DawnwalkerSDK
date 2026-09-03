#pragma once
#include "CoreMinimal.h"
#include "HighDensityMeshReductionSettings.h"
#include "SimplygonPipelineSettings.h"
#include "HighDensityMeshReductionPipelineSettings.generated.h"

USTRUCT(BlueprintType)
struct SIMPLYGONUOBJECTS_API FHighDensityMeshReductionPipelineSettings : public FSimplygonPipelineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighDensityMeshReductionSettings HighDensityMeshReductionSettings;
    
    FHighDensityMeshReductionPipelineSettings();
};

