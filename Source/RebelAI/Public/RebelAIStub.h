#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "StructUtils/InstancedStruct.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActorStub.h"
#include "ERebelAIAttitude.h"
#include "RebelAIActionDesc.h"
#include "RebelAIEvent.h"
#include "RebelAIHostileListUpdatedDelegate.h"
#include "RebelAIOnVoiceSetFinishedDelegate.h"
#include "RebelAIStub.generated.h"

class AActor;
class APopulationArea;
class UAbilitySystemComponent;
class UAnimMontage;
class UCommunityNPCDefinitionBase;
class UGameplayAbility;
class URebelAIActionExecutionContext;
class URebelAIBoard;
class URebelAIDef;
class URebelAIStub;
class URebelAIStubEquipmentProxy;
class URebelAIStubReactionsConfig;
class URebelCharacterMovement;
class URebelGenericTree;

UCLASS(Blueprintable)
class REBELAI_API URebelAIStub : public UActorStub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIHostileListUpdated OnHostileListUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIBoard* AIBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Services;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStubEquipmentProxy* EquipmentProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIDef* CachedAIDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStubReactionsConfig* CachedAIReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStubReactionsConfig* OverridenCachedAIReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIActionExecutionContext* AssetTreeQueryContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelGenericTree* Test_LogicTree;
    
public:
    URebelAIStub();

    UFUNCTION(BlueprintCallable)
    bool StowWeapon(const bool bPlayAnim);
    
    UFUNCTION(BlueprintCallable)
    void StopBrain();
    
    UFUNCTION(BlueprintCallable)
    void StartBrain();
    
    UFUNCTION(BlueprintCallable)
    void SetPerceptionEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetFocus(URebelAIStub* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetFaction(const FGameplayTag Faction);
    
    UFUNCTION(BlueprintCallable)
    void SetAttitudeTowards(URebelAIStub* OtherStub, ERebelAIAttitude Attitude, bool bKeep);
    
    UFUNCTION(BlueprintCallable)
    void ResetPerception(bool bStimuliListenerUpdate);
    
    UFUNCTION(BlueprintCallable)
    void RequestDespawn(bool bRequest);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceSetWithCallback(const FGameplayTag& VoiceSetTag, FRebelAIOnVoiceSetFinished Delegate, bool LimitByConfig);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceSet(const FGameplayTag& VoiceSetTag, bool LimitByConfig);
    
    UFUNCTION(BlueprintCallable)
    URebelAIActionExecutionContext* PerformDynamicActionWithEvent(const FGameplayTagContainer& ActionTags, const FRebelAIEvent& RelatedEvent, const bool bOptional);
    
    UFUNCTION(BlueprintCallable)
    URebelAIActionExecutionContext* PerformDynamicAction(const FGameplayTagContainer& ActionTags);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPerceptionForgotten(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneStart();
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityCommited(UGameplayAbility* Ability);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStubVisibleByPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInPopulationArea(const FVector Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitializedAndHasPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCinematicMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHostileTowardsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHostileTowards(const URebelAIStub* OtherStub) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriendlyTowardsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriendlyTowards(const URebelAIStub* OtherStub) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtRiskOfPunishment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReactionForSituation(const FGameplayTag& SituationTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPopulationArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APopulationArea* GetStubPopulationArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingPathLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStubReactionsConfig* GetReactionsConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumObservers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunityNPCDefinitionBase* GetNPCDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetFirstMontageFromAssetTreeWithTags(const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelCharacterMovement* GetCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelAIAttitude GetAttitudeTowardsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelAIAttitude GetAttitudeTowards(const URebelAIStub* OtherStub) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIDef* GetAIDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIBoard* GetAIBoard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceDespawnPawn();
    
    UFUNCTION(BlueprintCallable)
    bool EquipWeapon(const bool bPlayAnim);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSavedPathToStub(URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetCharacterState(const FGameplayTag State);
    
    UFUNCTION(BlueprintCallable)
    URebelAIActionExecutionContext* BP_PerformAction(UPARAM(Ref) FRebelAIActionDesc& ActionDesc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStubEquipmentProxy* BP_GetEquipmentProxy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_CharacterStateExist(const FGameplayTag State);
    
    UFUNCTION(BlueprintCallable)
    void AddTag(const FGameplayTag& Tag);
    
};

