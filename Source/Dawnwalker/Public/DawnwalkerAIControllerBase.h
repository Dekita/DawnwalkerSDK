#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "DogwoodAIController.h"
#include "DogwoodPassageUser.h"
#include "RebelRoadsAgentInterface.h"
#include "DawnwalkerAIControllerBase.generated.h"

class AActor;
class AQuestSplinePath;
class UDawnwalkerNPCBehaviorComponent;
class UEventBusComponent;
class URebelCharacterMovementProfile;
class URebelRoadsFollowingComponent;

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API ADawnwalkerAIControllerBase : public ADogwoodAIController, public IRebelRoadsAgentInterface, public IDogwoodPassageUser {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventBusComponent* EventBusComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovementTargetActorBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShouldFollowTargetBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShouldTrackTargetBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SplinePathBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveBackwardsBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerLostDistanceBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EscapeTargetActorBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EscapeWaypointTagBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EscapeReactionDistanceBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EscapeWaypointLocationBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastEscapeWaypointLocationBBKey;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDawnwalkerNPCBehaviorComponent* NPCBehaviorComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelCharacterMovementProfile* RoadsMovementProfile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URebelRoadsFollowingComponent* RebelRoadsFollowingComponent;
    
public:
    ADawnwalkerAIControllerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveWithCallbackEnded(EPathFollowingResult::Type Result);
    
public:
    UFUNCTION(BlueprintCallable)
    UEventBusComponent* GetEventBus();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallPlayerWanderedOff();
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_SetCanEverUseRoads(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void AIStopMovingAlongSpline();
    
    UFUNCTION(BlueprintCallable)
    void AIStopFollowing();
    
    UFUNCTION(BlueprintCallable)
    void AIStopEscapeFromActor();
    
    UFUNCTION(BlueprintCallable)
    void AIStartEscapeFromActor(AActor* TargetActor, const FName& WaypointTag, float ReactionDistance, const bool bUseFastOut);
    
    UFUNCTION(BlueprintCallable)
    void AIMoveToActor(AActor* TargetActor, const bool bShouldFollowTarget, const bool bShouldTrackPosition, const bool bUseFastOut);
    
    UFUNCTION(BlueprintCallable)
    void AIMoveAlongSpline(AQuestSplinePath* TargetSpline, const float PlayerLostDistance, const bool bMoveBackwards, const bool bUseFastOut);
    

    // Fix for true pure virtual functions not being implemented
};

