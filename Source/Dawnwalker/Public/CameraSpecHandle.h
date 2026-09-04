#pragma once
#include "CoreMinimal.h"
#include "CameraSpecHandle.generated.h"

USTRUCT(BlueprintType)
struct FCameraSpecHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    DAWNWALKER_API FCameraSpecHandle();
};

