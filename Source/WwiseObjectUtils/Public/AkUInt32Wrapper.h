#pragma once
#include "CoreMinimal.h"
#include "AkUInt32Wrapper.generated.h"

USTRUCT(BlueprintType)
struct WWISEOBJECTUTILS_API FAkUInt32Wrapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UInt32Value;
    
    FAkUInt32Wrapper();
};

