#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AbilityTask_WaitInputFlush.generated.h"

class UAbilityTask_WaitInputFlush;
class UGameplayAbility;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UAbilityTask_WaitInputFlush : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInputFlushedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputFlushedDelegate OnInputFlushed;
    
    UAbilityTask_WaitInputFlush();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitInputFlush* AbilityTaskWaitForInputFlush(UGameplayAbility* OwningAbility);
    
};

