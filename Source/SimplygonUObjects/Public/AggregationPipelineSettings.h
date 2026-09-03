#pragma once
#include "CoreMinimal.h"
#include "AggregationSettings.h"
#include "AttributeTessellationSettings.h"
#include "GenerateLightmapTexCoordSettings.h"
#include "GeometryCullingSettings.h"
#include "MappingImageSettings.h"
#include "SimplygonPipelineSettings.h"
#include "VertexWeightSettings.h"
#include "VisibilitySettings.h"
#include "AggregationPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct SIMPLYGONUOBJECTS_API FAggregationPipelineSettings : public FSimplygonPipelineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAggregationSettings AggregationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilitySettings VisibilitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryCullingSettings GeometryCullingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexWeightSettings VertexWeightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeTessellationSettings AttributeTessellationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMappingImageSettings MappingImageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenerateLightmapTexCoordSettings GenerateLightmapTexCoordSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;
    
    FAggregationPipelineSettings();
};

