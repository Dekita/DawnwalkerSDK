#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_CheckIfHealthBelowPercentage.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTTask_CheckIfHealthBelowPercentage : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percentage;
    
    UBTTask_CheckIfHealthBelowPercentage();

};

