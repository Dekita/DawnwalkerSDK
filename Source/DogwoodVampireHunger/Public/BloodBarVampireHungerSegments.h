#pragma once
#include "CoreMinimal.h"
#include "BloodBarVampireHungerSegments.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODVAMPIREHUNGER_API FBloodBarVampireHungerSegments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumHunger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighHunger;
    
    FBloodBarVampireHungerSegments();
};

