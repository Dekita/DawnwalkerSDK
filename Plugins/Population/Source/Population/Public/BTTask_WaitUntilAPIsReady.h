#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitUntilAPIsReady.generated.h"

UCLASS(Blueprintable)
class POPULATION_API UBTTask_WaitUntilAPIsReady : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WaitUntilAPIsReady();

};

