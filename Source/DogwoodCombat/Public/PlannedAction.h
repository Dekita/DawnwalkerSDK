#pragma once
#include "CoreMinimal.h"
#include "PlannedAction.generated.h"

class AActor;
class UFocusAbilityBase;

USTRUCT(BlueprintType)
struct FPlannedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFocusAbilityBase* Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
    DOGWOODCOMBAT_API FPlannedAction();
};

