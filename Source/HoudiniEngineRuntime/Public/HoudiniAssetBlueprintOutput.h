#pragma once
#include "CoreMinimal.h"
#include "HoudiniOutputObject.h"
#include "HoudiniAssetBlueprintOutput.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniAssetBlueprintOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoudiniOutputObject OutputObject;
    
    FHoudiniAssetBlueprintOutput();
};

