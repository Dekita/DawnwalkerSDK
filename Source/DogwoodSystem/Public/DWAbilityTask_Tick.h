#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "OnTickTaskDelegateDelegate.h"
#include "DWAbilityTask_Tick.generated.h"

class UDWAbilityTask_Tick;
class UGameplayAbility;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UDWAbilityTask_Tick : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTickTaskDelegate OnTick;
    
    UDWAbilityTask_Tick();

    UFUNCTION(BlueprintCallable)
    static UDWAbilityTask_Tick* AbilityTaskOnTick(UGameplayAbility* OwningAbility, FName TaskInstanceName, float InTickInterval);
    
};

