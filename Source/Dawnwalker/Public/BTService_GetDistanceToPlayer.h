#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_GetDistanceToPlayer.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UBTService_GetDistanceToPlayer : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UBTService_GetDistanceToPlayer();

};

