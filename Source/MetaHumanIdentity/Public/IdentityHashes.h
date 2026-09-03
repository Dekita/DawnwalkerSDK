#pragma once
#include "CoreMinimal.h"
#include "IdentityHashFlags.h"
#include "IdentityHashes.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANIDENTITY_API FIdentityHashes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdentityHashFlags HashFlags;
    
    FIdentityHashes();
};

