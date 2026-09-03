#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNodeActionBase.h"
#include "QuestNodePostProcess.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePostProcess : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EffectTag;
    
public:
    UQuestNodePostProcess();

};

