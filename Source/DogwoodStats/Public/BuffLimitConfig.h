#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "BuffLimitConfig.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSTATS_API FBuffLimitConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute IncreasingAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTryReplaceSameAttribute;
    
    FBuffLimitConfig();
};

