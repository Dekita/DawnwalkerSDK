#pragma once
#include "CoreMinimal.h"
#include "WorkCategory.generated.h"

USTRUCT(BlueprintType)
struct POPULATION_API FWorkCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FWorkCategory();
};

