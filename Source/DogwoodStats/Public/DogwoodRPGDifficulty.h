#pragma once
#include "CoreMinimal.h"
#include "DogwoodRPGDifficulty.generated.h"

USTRUCT(BlueprintType)
struct FDogwoodRPGDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCombatStaminaCostsMultiplier;
    
    DOGWOODSTATS_API FDogwoodRPGDifficulty();
};

