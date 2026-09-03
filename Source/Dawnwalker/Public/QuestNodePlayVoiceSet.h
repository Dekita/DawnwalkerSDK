#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "GameplayTagContainer.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodePlayVoiceSet.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePlayVoiceSet : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoiceSetInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPlayDuringCombat;
    
public:
    UQuestNodePlayVoiceSet();

};

