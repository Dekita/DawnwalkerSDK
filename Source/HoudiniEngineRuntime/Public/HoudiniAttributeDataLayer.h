#pragma once
#include "CoreMinimal.h"
#include "HoudiniDataLayer.h"
#include "HoudiniAttributeDataLayer.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniAttributeDataLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHoudiniDataLayer> DataLayers;
    
    FHoudiniAttributeDataLayer();
};

