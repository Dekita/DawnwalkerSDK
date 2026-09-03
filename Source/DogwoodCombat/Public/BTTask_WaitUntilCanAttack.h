#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitUntilCanAttack.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTTask_WaitUntilCanAttack : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceAcceptThreshold;
    
    UBTTask_WaitUntilCanAttack();

};

