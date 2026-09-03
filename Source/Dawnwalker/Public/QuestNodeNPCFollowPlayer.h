#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "QuestNodeNPCBase.h"
#include "QuestNodeNPCFollowPlayer.generated.h"

UCLASS(Blueprintable, Config=Game)
class DAWNWALKER_API UQuestNodeNPCFollowPlayer : public UQuestNodeNPCBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TargetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference FollowAreaTagRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepDistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnToAPDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFastActionPointExitMode;
    
public:
    UQuestNodeNPCFollowPlayer();

};

