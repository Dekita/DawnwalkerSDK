#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeTaskCommonBase.h"
#include "RebelHLTreeDelayTask.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeDelayTask : public FRebelHLTreeTaskCommonBase {
    GENERATED_BODY()
public:
    FRebelHLTreeDelayTask();
};

