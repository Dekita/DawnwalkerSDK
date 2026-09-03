#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FItemHandle {
    GENERATED_BODY()
public:
    FItemHandle();
};
FORCEINLINE uint32 GetTypeHash(const FItemHandle) { return 0; }

