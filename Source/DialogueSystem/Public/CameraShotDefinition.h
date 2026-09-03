#pragma once
#include "CoreMinimal.h"
#include "CameraShotDefinition.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCameraShotDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    FCameraShotDefinition();
};

