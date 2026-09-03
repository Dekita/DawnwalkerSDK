#pragma once
#include "CoreMinimal.h"
#include "ActiveAbilityTag.h"
#include "GameplayCueTag.h"
#include "AnimNotify_GameplayCueAAConditional.h"
#include "AnimNotify_AABasedGameplayCue.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UAnimNotify_AABasedGameplayCue : public UAnimNotify_GameplayCueAAConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FActiveAbilityTag, FGameplayCueTag> ActiveAbilityToGameplayCueMap;
    
public:
    UAnimNotify_AABasedGameplayCue();

};

