#pragma once
#include "CoreMinimal.h"
#include "AkUInt64Wrapper.generated.h"

USTRUCT(BlueprintType)
struct WWISEOBJECTUTILS_API FAkUInt64Wrapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 UInt64Value;
    
    FAkUInt64Wrapper();
};

