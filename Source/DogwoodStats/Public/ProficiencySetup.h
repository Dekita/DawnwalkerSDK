#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "GameplayTagContainer.h"
#include "ProficiencySetup.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSTATS_API FProficiencySetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Penalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute PenaltyOverrideAttribute;
    
    FProficiencySetup();
};

