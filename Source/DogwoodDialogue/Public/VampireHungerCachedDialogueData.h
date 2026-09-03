#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VampireHungerCachedDialogueData.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODDIALOGUE_API FVampireHungerCachedDialogueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasVampireHungerChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BloodDrinkingTarget;
    
    FVampireHungerCachedDialogueData();
};

