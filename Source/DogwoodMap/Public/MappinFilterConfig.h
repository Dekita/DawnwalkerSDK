#pragma once
#include "CoreMinimal.h"
#include "MappinFilterConfig.generated.h"

class UMappinFilter;

USTRUCT(BlueprintType)
struct FMappinFilterConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMappinFilter> Filter;
    
    DOGWOODMAP_API FMappinFilterConfig();
};

