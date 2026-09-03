#pragma once
#include "CoreMinimal.h"
#include "CameraSpecHandle.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FCameraSpecHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    FCameraSpecHandle();
};

