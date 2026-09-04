#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EComparisonOperator.h"
#include "FactTemplate.generated.h"

USTRUCT(BlueprintType)
struct FACTSDB_API FFactTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator ComparisonOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FFactTemplate();
};

