#pragma once
#include "CoreMinimal.h"
#include "ActiveAbilityTag.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayCueTag.h"
#include "AnimNotifyState_AABasedGameplayCue.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UAnimNotifyState_AABasedGameplayCue : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FActiveAbilityTag, FGameplayCueTag> ActiveAbilityToGameplayCueMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayCueTag GameplayCueTagCached;
    
public:
    UAnimNotifyState_AABasedGameplayCue();

};

