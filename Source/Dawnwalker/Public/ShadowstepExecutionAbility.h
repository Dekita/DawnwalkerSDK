#pragma once
#include "CoreMinimal.h"
#include "SynchronisedAnimation.h"
#include "GameplayAbility.h"
#include "ShadowstepExecutionAbility.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UShadowstepExecutionAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSynchronisedAnimation HumanoidAnimation;
    
public:
    UShadowstepExecutionAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAnimationEnded();
    
};

