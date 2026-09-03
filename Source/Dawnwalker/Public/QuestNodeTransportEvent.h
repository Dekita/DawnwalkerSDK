#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorReference.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeTransportEvent.generated.h"

class ADawnwalkerTransportActor;
class APawn;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeTransportEvent : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TransportReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TransportGuid;
    
public:
    UQuestNodeTransportEvent();

    UFUNCTION(BlueprintCallable)
    void OnTransportUnregistered(const FGuid ID);
    
    UFUNCTION(BlueprintCallable)
    void OnTransportStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnTransportSpawned();
    
    UFUNCTION(BlueprintCallable)
    void OnTransportResumed();
    
    UFUNCTION(BlueprintCallable)
    void OnTransportRegistered(const FGuid ID, ADawnwalkerTransportActor* Transport);
    
    UFUNCTION(BlueprintCallable)
    void OnTransportDespawned();
    
    UFUNCTION(BlueprintCallable)
    void OnTransportDefeated();
    
    UFUNCTION(BlueprintCallable)
    void OnTransportDeativated();
    
    UFUNCTION(BlueprintCallable)
    void OnTransportActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeftGuardArea();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnteredGuardArea();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnKilled(APawn* PawnKilled);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStarted();
    
};

