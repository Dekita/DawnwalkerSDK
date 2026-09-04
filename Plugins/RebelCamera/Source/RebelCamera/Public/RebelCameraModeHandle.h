#pragma once
#include "CoreMinimal.h"
#include "RebelCameraModeHandle.generated.h"

USTRUCT(BlueprintType)
struct FRebelCameraModeHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    REBELCAMERA_API FRebelCameraModeHandle();
};

