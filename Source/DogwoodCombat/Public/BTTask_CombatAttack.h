#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_CombatAttack.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTTask_CombatAttack : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_CombatAttack();

};

