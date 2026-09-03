#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeEvent.h"
#include "RebelHLTreeEventQueue.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeEventQueue {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelHLTreeEvent> Events;
    
public:
    FRebelHLTreeEventQueue();
};

