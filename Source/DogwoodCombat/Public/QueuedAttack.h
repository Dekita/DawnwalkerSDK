#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QueuedAttack.generated.h"

USTRUCT(BlueprintType)
struct FQueuedAttack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    DOGWOODCOMBAT_API FQueuedAttack();
};

