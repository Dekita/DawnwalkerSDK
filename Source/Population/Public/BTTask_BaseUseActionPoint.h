#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "BTTask_BaseUseActionPoint.generated.h"

UCLASS(Abstract, Blueprintable)
class POPULATION_API UBTTask_BaseUseActionPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_BaseUseActionPoint();

    UFUNCTION()
    void OnNotify(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
};

