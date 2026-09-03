#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitUntilCombatReactionFinished.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTTask_WaitUntilCombatReactionFinished : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WaitUntilCombatReactionFinished();

};

