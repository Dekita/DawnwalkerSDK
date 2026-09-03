#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "GameplayTagContainer.h"
#include "QuestActorRequest.h"
#include "QuestNodeNPCBase.h"
#include "QuestNodeNPCStartEscapeFromActor.generated.h"

class URebelCharacterMovementProfile;

UCLASS(Blueprintable, Config=Game)
class DAWNWALKER_API UQuestNodeNPCStartEscapeFromActor : public UQuestNodeNPCBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TargetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestActorRequest TargetRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WaypointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelCharacterMovementProfile* MovementProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFastActionPointExitMode;
    
public:
    UQuestNodeNPCStartEscapeFromActor();

};

