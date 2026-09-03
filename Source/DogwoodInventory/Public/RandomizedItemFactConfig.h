#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RandomizedItemFactConfig.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FRandomizedItemFactConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FactMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FactMax;
    
    FRandomizedItemFactConfig();
};

