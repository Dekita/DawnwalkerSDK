#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_CheckAttackRange.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTDecorator_CheckAttackRange : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_CheckAttackRange();

};

