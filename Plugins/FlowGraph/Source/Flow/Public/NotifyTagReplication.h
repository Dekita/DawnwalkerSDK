#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NotifyTagReplication.generated.h"

USTRUCT(BlueprintType)
struct FNotifyTagReplication {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NotifyTag;
    
    FLOW_API FNotifyTagReplication();
};

