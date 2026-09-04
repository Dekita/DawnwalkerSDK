#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeDebugTextTaskInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeDebugTextTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ReferenceActor;
    
    FRebelHLTreeDebugTextTaskInstanceData();
};

