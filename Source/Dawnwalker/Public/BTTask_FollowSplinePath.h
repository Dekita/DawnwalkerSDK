#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_FollowSplinePath.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UBTTask_FollowSplinePath : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MoveBackwardsBlackboardKey;
    
    UBTTask_FollowSplinePath();

};

