#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERebelIndicatorIconType.h"
#include "ERebelIndicatorStatePriority.h"
#include "RebelAIBoardFragment_Aggression.h"
#include "RebelAIBoardFragment_Combat.h"
#include "RebelAIBoardFragment_Cooldowns.h"
#include "RebelAIBoardFragment_Counters.h"
#include "RebelAIBoardFragment_DebugAP.h"
#include "RebelAIBoardFragment_Follower.h"
#include "RebelAIBoardFragment_Indicator.h"
#include "RebelAIBoardFragment_Leader.h"
#include "RebelAIBoardFragment_Positioning.h"
#include "RebelAIBoardFragment_TicketBoard.h"
#include "RebelAIBoardFragment_TicketUser.h"
#include "RebelAIIndexArray.h"
#include "RebelAIRecentEvents.h"
#include "RebelAITicketBoardOwnerInterface.h"
#include "RebelAITraitInterface.h"
#include "RebelIndicatorState.h"
#include "RebelAIBoard.generated.h"

class ACombatArena;
class ATriggerVolume;
class URebelAIActionExecutionContext;
class URebelAIStub;
class URebelFormationGroup;

UCLASS(Blueprintable)
class REBELAI_API URebelAIBoard : public UObject, public IRebelAITraitInterface, public IRebelAITicketBoardOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URebelAIActionExecutionContext*> ActiveActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRebelAIIndexArray> UsedRandomMontageMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, double> ActionTimestamps;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, double> ActionEndTimestamps;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelFormationGroup> Formation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> AIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainBehaviorSuspended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentCharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CustomIdleBehaviorLogicTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentPhaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentBehaviorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIRecentEvents RecentEvents;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<URebelAIStub>> Sensed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<URebelAIStub>> Hostiles;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<URebelAIStub>> Observers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> ForcedTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_TicketBoard TicketBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_TicketUser TicketUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_Combat Combat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_Follower Follower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_Leader Leader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_DebugAP ActionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_Aggression Aggression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_Positioning Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_Cooldowns Cooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_Counters Counters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBoardFragment_Indicator Indicator;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ATriggerVolume>> OverlappedPopulationTriggers;
    
public:
    URebelAIBoard();

    UFUNCTION(BlueprintCallable)
    void UpdateReactionLastSignalTime();
    
    UFUNCTION(BlueprintCallable)
    void Temp_BP_SetWeapon(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void Temp_BP_SetCombatMode(const FGameplayTag CombatModeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag Temp_BP_GetWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Temp_BP_GetCombatMode(FGameplayTag& CombatModeTag) const;
    
    UFUNCTION(BlueprintCallable)
    void StopReaction();
    
    UFUNCTION(BlueprintCallable)
    void StopPlayingMontagesByActions();
    
    UFUNCTION(BlueprintCallable)
    void StopAllActions();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVectorPropertyByName(const FName& PropertyName, const FVector& Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTotalCombatPhases(const int32& TotalPhases);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetObjectPropertyByName(const FName& PropertyName, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIntPropertyByName(const FName& PropertyName, int32 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetForcedTarget(URebelAIStub* InTarget, float duration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFloatPropertyByName(const FName& PropertyName, float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCustomIdleBehaviorLogicTask(const FGameplayTag& LogicTaskTag);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomGuardDirectionMappings(UPARAM(Ref) TMap<FGameplayTag, FGameplayTagContainer>& CustomGuardDirectionMappings);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCombatPhase(const int32& Phase);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTags(const FGameplayTagContainer& InTags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSensedObject(URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRememberFear(URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveIndicatorState(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void OverrideReactionParams(const FInstancedStruct& Data, URebelAIStub* Instigator, const FGameplayTag& SituationTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumObservers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumHostiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStubInsideMyCombatGuardArea(const URebelAIStub* OtherStub) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSomeoneHoldingTicket(FGameplayTag TicketTypeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReactionInteruptableByCutscene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideGuardArea(const URebelAIStub* CheckTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideCombatGuardArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingAttackedBy(URebelAIStub* Attacker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingAttacked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTicketToGive(FGameplayTag TicketTypeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTicketOfType(FGameplayTag TicketTypeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTag(const FGameplayTag& Tag, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSensedObject(URebelAIStub* Stub) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRememberFear(URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPerformedActionRecently(const FGameplayTag& ActionTag, float TimeWindowSeconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHostile(URebelAIStub* Stub) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFinishedActionRecently(const FGameplayTag& ActionTag, float TimeWindowSeconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttacker(const URebelAIStub* Stub) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyUnbreakableActiveAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyTags(const FGameplayTagContainer& InTags, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActiveActionWithTags(const FGameplayTagContainer& ActionTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActiveAction(const FGameplayTagContainer& ActionTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllTags(const FGameplayTagContainer& InTags, bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStub* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRebelAIRecentEvents GetRecentEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetReactionSituationTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetReactionSituationOrigin() const;
    
    UFUNCTION(BlueprintPure)
    double GetReactionLastSignalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReactionIsResumed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStub* GetReactionInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetGuardAreaLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelFormationGroup* GetFormation();
    
    UFUNCTION(BlueprintCallable)
    URebelAIStub* GetForcedTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelIndicatorIconType GetCurrentIndicatorIconType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACombatArena* GetCombatArena() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClosestEdgePointOnGuardArea(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClosestEdgePointOnCombatGuardArea(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCharacterPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetBlockingDirections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URebelAIStub*> GetAttackers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIActionExecutionContext* GetActiveAction(const FGameplayTag& ActionTag) const;
    
    UFUNCTION(BlueprintPure)
    double GetActionTimestamp(const FGameplayTag& ActionTag) const;
    
    UFUNCTION(BlueprintPure)
    double GetActionEndTimestamp(const FGameplayTag& ActionTag) const;
    
    UFUNCTION(BlueprintCallable)
    void CopyGuardAreaFromStub(URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCombatPathToStub(URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeAttacked(TArray<URebelAIStub*> StubsToIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_HasActiveAction(const FGameplayTag& ActionTag) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_AddHostile(URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable)
    void AddTags(const FGameplayTagContainer& InTags);
    
    UFUNCTION(BlueprintCallable)
    void AddTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddSensedObject(URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable)
    void AddRememberFear(URebelAIStub* Stub, float ReactionEnd, float RememberFor, FGameplayTag SituationTag, const bool bRenew);
    
    UFUNCTION(BlueprintCallable)
    void AddLookAtTarget(URebelAIStub* InTarget);
    
    UFUNCTION(BlueprintCallable)
    int32 AddIndicatorState(ERebelIndicatorStatePriority Priority, FRebelIndicatorState State, bool bPushToBottom);
    
    UFUNCTION(BlueprintCallable)
    void ActivateParryWindowForIndicatorState(int32 ID);
    

    // Fix for true pure virtual functions not being implemented
};

