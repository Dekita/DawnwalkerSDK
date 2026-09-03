#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RandomizedItemGroup.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FRandomizedItemGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WholeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RarityPool;
    
    FRandomizedItemGroup();
};

