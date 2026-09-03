#pragma once
#include "CoreMinimal.h"
#include "HoudiniClearedTargetLayer.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniClearedTargetLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> TargetLayers;
    
    FHoudiniClearedTargetLayer();
};

