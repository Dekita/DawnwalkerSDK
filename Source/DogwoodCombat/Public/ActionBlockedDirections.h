#pragma once
#include "CoreMinimal.h"
#include "ActionBlockedDirections.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FActionBlockedDirections {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BlockedDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> ActionMontage;
    
    FActionBlockedDirections();
};

