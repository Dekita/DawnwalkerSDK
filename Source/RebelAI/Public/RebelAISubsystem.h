#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "RebelAIEvent.h"
#include "RebelAIStubEventDynamicDelegateDelegate.h"
#include "RebelAISubsystem.generated.h"

class AActor;
class AController;
class APawn;
class UObject;
class URebelAIAggressionController;
class URebelAIArea;
class URebelAICombatController;
class URebelAIControllerBase;
class URebelAICooldownController;
class URebelAICounterController;
class URebelAIFactionsController;
class URebelAIGameEventProcessor;
class URebelAIReactionsController;
class URebelAIStub;
class URebelAITestController;
class URebelAITicketsController;

UCLASS(Blueprintable, Config=Game)
class REBELAI_API URebelAISubsystem : public UTickableWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastTimePlayerKilledCivilian;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URebelAIStub*> StubsToForceCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, URebelAIArea*> RegisteredAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URebelAIControllerBase*> Controllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIGameEventProcessor* GameEventProcessor;
    
public:
    URebelAISubsystem();

    UFUNCTION(BlueprintCallable)
    void UnsubscribeEventById(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    int32 SubscribeToStubEvent(URebelAIStub* AIStub, const FGameplayTag EventTag, FRebelAIStubEventDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void ResetAggressionBetweenStubs(URebelAIStub* AIStubA, URebelAIStub* AIStubB);
    
    UFUNCTION(BlueprintCallable)
    void ReportGameEvent(UPARAM(Ref) FRebelAIEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void ReportEventToStub(URebelAIStub* AIStub, const FRebelAIEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void ReportEventToAllStubsInRangeWithSkip(const FVector& Location, float Range, const FRebelAIEvent& Event, const TArray<URebelAIStub*>& SkipStubs);
    
    UFUNCTION(BlueprintCallable)
    void ReportEventToAllStubsInRange(const FVector& Location, float Range, const FRebelAIEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void ReportEvent(const FRebelAIEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePlayerInvulnerability(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCombatAgainstPlayerBlocker(UObject* Blocker);
    
    UFUNCTION(BlueprintCallable)
    void ProcessPerception_SensingObject(const AController* Observer, const AActor* Object, bool Sensed);
    
    UFUNCTION(BlueprintCallable)
    void OnPostGarbageCollect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayer(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAITicketsController* GetTicketsController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAITestController* GetTestController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStubsInRange(const FVector& Location, float Range, TArray<URebelAIStub*>& Stubs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIReactionsController* GetReactionsController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFactionStubsInRange(const FVector& Location, const FGameplayTag& Faction, float Range, TArray<URebelAIStub*>& Stubs, const bool bSortByDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIFactionsController* GetFactionsController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEnemyStubsInRange(URebelAIStub* AIStub, float Range, TArray<URebelAIStub*>& Stubs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAICounterController* GetCounterController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAICooldownController* GetCooldownController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAICombatController* GetCombatController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCombatantsInRange(const FVector& Location, float Range, TArray<URebelAIStub*>& Stubs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelAIStub* GetAIStubFromActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIAggressionController* GetAggressionController() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceAggressionTowardsTargetForAllCombatantsInRange(URebelAIStub* Target, float Range);
    
    UFUNCTION(BlueprintCallable)
    void ForceAggressionTowardsTarget(URebelAIStub* AIStub, URebelAIStub* Target, float ForceTargetDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStub* FindStubWithTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindStubsWithTag(TArray<URebelAIStub*>& Array, const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable)
    URebelAIStub* FindStubByController(const AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    URebelAIStub* FindStubByActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStub* FindPlayerStub();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStub* FindNearestStubWithTag(const FVector& Origin, const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintPure)
    bool DoesPathBetweenStubsExist(const URebelAIStub* AIStubA, const URebelAIStub* AIStubB, double MaxPathLength, bool bAllowNavLinks) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BP_IsNewAIEnabledForPawn(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    static void AddPlayerInvulnerability(UObject* Source);
    
    UFUNCTION(BlueprintCallable)
    static void AddCombatAgainstPlayerBlocker(UObject* Blocker);
    

    // Fix for true pure virtual functions not being implemented
};

