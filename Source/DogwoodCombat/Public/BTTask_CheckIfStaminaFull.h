#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_CheckIfStaminaFull.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTTask_CheckIfStaminaFull : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_CheckIfStaminaFull();

};

