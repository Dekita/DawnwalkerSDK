#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "RInputDisplayKey.generated.h"

USTRUCT(BlueprintType)
struct REBELINPUTDISPLAY_API FRInputDisplayKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Directions;
    
    FRInputDisplayKey();
};
FORCEINLINE uint32 GetTypeHash(const FRInputDisplayKey) { return 0; }

