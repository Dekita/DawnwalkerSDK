#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "AnimNotifyState_OverrideCinematicIdleType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DIALOGUESYSTEM_API UAnimNotifyState_OverrideCinematicIdleType : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IdleTypeOverride;
    
public:
    UAnimNotifyState_OverrideCinematicIdleType();

};

