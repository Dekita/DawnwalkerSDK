#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_CombatTicket.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTService_CombatTicket : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CombatTargetKey;
    
public:
    UBTService_CombatTicket();

};

