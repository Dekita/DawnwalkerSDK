#pragma once
#include "CoreMinimal.h"
#include "RandomizedItemFactConfig.h"
#include "RandomizedItemFactsConfig.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FRandomizedItemFactsConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomizedItemFactConfig> Facts;
    
    FRandomizedItemFactsConfig();
};

