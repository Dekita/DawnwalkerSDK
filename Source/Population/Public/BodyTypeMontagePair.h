#pragma once
#include "CoreMinimal.h"
#include "BodyTypeMontagePair.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct POPULATION_API FBodyTypeMontagePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AnimMontage;
    
    FBodyTypeMontagePair();
};

