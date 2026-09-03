#pragma once
#include "CoreMinimal.h"
#include "MappinInstanceId.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODMAP_API FMappinInstanceId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Value;
    
public:
    FMappinInstanceId();
};
FORCEINLINE uint32 GetTypeHash(const FMappinInstanceId) { return 0; }

