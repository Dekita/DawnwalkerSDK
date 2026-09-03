#pragma once
#include "CoreMinimal.h"
#include "EChartAggregatorMode.h"
#include "ESourceTexCoordMode.h"
#include "StandinLightmapSettings.h"
#include "NearStandinLightmapSettings.generated.h"

USTRUCT(BlueprintType)
struct STANDINACTOR_API FNearStandinLightmapSettings : public FStandinLightmapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateLightmapTexCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TexCoordResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TexCoordGutterSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChartAggregatorMode TexCoordPackerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESourceTexCoordMode SourceTexCoordMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceTexCoordIndex;
    
    FNearStandinLightmapSettings();
};

