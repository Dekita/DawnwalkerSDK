#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_ClearBlackboardEntry.generated.h"

UCLASS(Blueprintable)
class DOGWOODAI_API UBTTask_ClearBlackboardEntry : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_ClearBlackboardEntry();

};

