#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "OnTransportActivatedDelegate.h"
#include "OnTransportCombatStartedDelegate.h"
#include "OnTransportCombatStoppedDelegate.h"
#include "OnTransportDeactivatedDelegate.h"
#include "OnTransportDefeatedDelegate.h"
#include "OnTransportDespawnedDelegate.h"
#include "OnTransportPawnKilledDelegate.h"
#include "OnTransportPlayerEnterGuardAreaDelegate.h"
#include "OnTransportPlayerLeftGuardAreaDelegate.h"
#include "OnTransportResumedDelegate.h"
#include "OnTransportSpawnedDelegate.h"
#include "OnTransportStoppedDelegate.h"
#include "DawnwalkerTransportActor.generated.h"

class ADawnwalkerTransportRoute;
class UDawnwalkerTransportDefinition;
class UDawnwalkerTransportSubsystem;
class UPersistencyComponent;
class URebelFormationGroup;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerTransportActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ADawnwalkerTransportRoute> Route;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerTransportDefinition* Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TransportTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TransportGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPersistencyComponent* PersistencyComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportDefeated OnTransportDefeated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportPawnKilled OnTransportPawnKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportPlayerEnterGuardArea OnTransportPlayerEnterGuardArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportPlayerLeftGuardArea OnTransportPlayerLeftGuardArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportStopped OnTransportStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportResumed OnTransportResumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportCombatStarted OnTransportCombatStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportCombatStopped OnTransportCombatStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportActivated OnTransportActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportDeactivated OnTransportDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportSpawned OnTransportSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransportDespawned OnTransportDespawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelFormationGroup* GroupFormation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DataTableNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDawnwalkerTransportSubsystem* TransportSubsystem;
    
public:
    ADawnwalkerTransportActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetDefeated(const bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(const bool bState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransportDefeatedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPointInActivationArea(const FVector& Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefeated();
    
    UFUNCTION()
    bool IsActive();
    
    UFUNCTION()
    FOnTransportStopped GetOnTransportStopped();
    
    UFUNCTION()
    FOnTransportSpawned GetOnTransportSpawned();
    
    UFUNCTION()
    FOnTransportResumed GetOnTransportResumed();
    
    UFUNCTION()
    FOnTransportPlayerLeftGuardArea GetOnTransportPlayerLeftGuardArea();
    
    UFUNCTION()
    FOnTransportPlayerEnterGuardArea GetOnTransportPlayerEnterGuardArea();
    
    UFUNCTION()
    FOnTransportPawnKilled GetOnTransportPawnKilled();
    
    UFUNCTION()
    FOnTransportDespawned GetOnTransportDespawned();
    
    UFUNCTION()
    FOnTransportDefeated GetOnTransportDefeated();
    
    UFUNCTION()
    FOnTransportDeactivated GetOnTransportDeactivated();
    
    UFUNCTION()
    FOnTransportCombatStopped GetOnTransportCombatStopped();
    
    UFUNCTION()
    FOnTransportCombatStarted GetOnTransportCombatStarted();
    
    UFUNCTION()
    FOnTransportActivated GetOnTransportActivated();
    
};

