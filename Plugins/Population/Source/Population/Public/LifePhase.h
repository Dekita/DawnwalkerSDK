#pragma once
#include "CoreMinimal.h"
#include "ETimeOfDay.h"
#include "WorkCategory.h"
#include "LifePhase.generated.h"

USTRUCT(BlueprintType)
struct POPULATION_API FLifePhase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeOfDay Hour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeOfDay EndHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWorkCategory> WorkCategories;
    
    FLifePhase();
};

