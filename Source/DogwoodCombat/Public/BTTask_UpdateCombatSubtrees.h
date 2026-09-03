#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_UpdateCombatSubtrees.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTTask_UpdateCombatSubtrees : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_UpdateCombatSubtrees();

};

