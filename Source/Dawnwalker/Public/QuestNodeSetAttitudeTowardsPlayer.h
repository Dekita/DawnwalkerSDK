#pragma once
#include "CoreMinimal.h"
#include "ECharacterAttitude.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeSetAttitudeTowardsPlayer.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetAttitudeTowardsPlayer : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference ActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAttitude AttitudeToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCombatWithPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipWeaponDrawAnimation;
    
public:
    UQuestNodeSetAttitudeTowardsPlayer();

};

