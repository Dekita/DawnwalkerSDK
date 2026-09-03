#pragma once
#include "CoreMinimal.h"
#include "StandinLightmapSettings.generated.h"

USTRUCT(BlueprintType)
struct STANDINACTOR_API FStandinLightmapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightmapIndex;
    
    FStandinLightmapSettings();
};

