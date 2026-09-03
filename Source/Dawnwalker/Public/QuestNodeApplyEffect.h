#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "EEffectType.h"
#include "QuestNodeApplyEffect.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeApplyEffect : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEffectType> EffectToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Remove;
    
public:
    UQuestNodeApplyEffect();

};

