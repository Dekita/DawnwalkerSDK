#pragma once
#include "CoreMinimal.h"
#include "TraitLevelRequirements.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FTraitLevelRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTraitPointSpent;
    
    FTraitLevelRequirements();
};

