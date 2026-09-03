#pragma once
#include "CoreMinimal.h"
#include "HoudiniClearedTargetLayer.h"
#include "HoudiniClearedEditLayers.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniClearedEditLayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FHoudiniClearedTargetLayer> EditLayers;
    
    FHoudiniClearedEditLayers();
};

