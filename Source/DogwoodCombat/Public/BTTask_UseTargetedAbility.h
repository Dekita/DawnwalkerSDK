#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "GameplayTagContainer.h"
#include "BTTask_UseTargetedAbility.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTTask_UseTargetedAbility : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TriggerEventTag;
    
public:
    UBTTask_UseTargetedAbility();

};

