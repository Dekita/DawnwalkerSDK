#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QueuedAttack.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FQueuedAttack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    FQueuedAttack();
};

