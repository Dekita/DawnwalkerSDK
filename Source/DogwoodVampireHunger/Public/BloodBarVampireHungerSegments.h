#pragma once
#include "CoreMinimal.h"
#include "BloodBarVampireHungerSegments.generated.h"

USTRUCT(BlueprintType)
struct FBloodBarVampireHungerSegments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumHunger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighHunger;
    
    DOGWOODVAMPIREHUNGER_API FBloodBarVampireHungerSegments();
};

