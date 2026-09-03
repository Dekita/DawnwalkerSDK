#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraShotNodeCache.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCameraShotNodeCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> CameraCutFrames;
    
    FCameraShotNodeCache();
};

