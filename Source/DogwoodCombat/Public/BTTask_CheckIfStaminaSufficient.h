#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_CheckIfStaminaSufficient.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTTask_CheckIfStaminaSufficient : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_CheckIfStaminaSufficient();

};

