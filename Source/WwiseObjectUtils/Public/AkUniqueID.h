#pragma once
#include "CoreMinimal.h"
#include "AkUInt32Wrapper.h"
#include "AkUniqueID.generated.h"

USTRUCT(BlueprintType)
struct WWISEOBJECTUTILS_API FAkUniqueID : public FAkUInt32Wrapper {
    GENERATED_BODY()
public:
    FAkUniqueID();
};

