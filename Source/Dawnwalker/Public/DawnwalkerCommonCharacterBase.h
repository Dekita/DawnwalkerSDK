#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "UObject/NoExportTypes.h"
#include "CinematicCharacter.h"
#include "DwRagdollHandlerInterface.h"
#include "FocusAbilityTargetable.h"
#include "CreatureInterface.h"
#include "EInteractableState.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ActorStubInterface.h"
#include "BudgetedMovementInterface.h"
#include "DefinedNPCInterface.h"
#include "PopulationVisibilityInterface.h"
#include "ERebelRotationMode.h"
#include "RebelCharacterInterface.h"
#include "DawnwalkerLookAtTargetInstance.h"
#include "OnAnimInstanceChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "DawnwalkerCommonCharacterBase.generated.h"

class AActor;
class UActorStubComponent;
class UAnimInstance;
class UAnimMontage;
class UAudioCharacterCommonBaseComponent;
class UDawnwalkerCharacterMovement;
class UInventoryComponent;
class UNiagaraComponent;
class UPawnDefinitionBase;
class URWAudioComponent;
class URebelCharacterMovementProfile;
class URebelLocomotionConditionSet;
class URebelLocomotionMontageSet;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerCommonCharacterBase : public ACinematicCharacter, public IDefinedNPCInterface, public IFocusAbilityTargetable, public ICreatureInterface, public IPopulationVisibilityInterface, public IBudgetedMovementInterface, public IRebelCharacterInterface, public IActorStubInterface, public IDwRagdollHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorStubComponent* StubComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimInstanceChanged OnAnimInstanceChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference AkRootComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference AkHeadComponentRef;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPawnDefinitionBase> PawnDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelCharacterMovementProfile* DefaultMovementProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> DefaultAnimLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAnimInstance>> AdditionalAnimLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LookSourceSocketTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LookTargetSocketTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FocusedSocketTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAstralVFXOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDawnwalkerCharacterMovement* RebelCharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CharacterScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollTimerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollMinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollVelocityThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* CachedAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CreatureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDawnwalkerLookAtTargetInstance> LookAtTargets;
    
public:
    ADawnwalkerCommonCharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOverrideCharacterMesh(bool bOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetLookTargetSocketTag(const FGameplayTag& LookTargetTag);
    
    UFUNCTION(BlueprintCallable)
    void SetLookSourceSocketTag(const FGameplayTag& LookSourceTag);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusedSocketTag(const FGameplayTag SocketTag);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLookTargetSocketTag();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLookSourceSocketTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* SelectMontageFromSet(const URebelLocomotionMontageSet* MontageSet) const;
    
    UFUNCTION(BlueprintCallable)
    bool RemoveLookAtTarget(int32 InHandle);
    
    UFUNCTION(BlueprintCallable)
    int32 PushRotationMode(const ERebelRotationMode InRotationMode, const uint8 InPriority);
    
    UFUNCTION(BlueprintCallable)
    int32 PushMovementProfile(const URebelCharacterMovementProfile* InMovementProfile);
    
    UFUNCTION(BlueprintCallable)
    int32 PushLinkedAnimLayers(TSubclassOf<UAnimInstance> LinkedAnimLayersClass, const uint8 DefaultPriority, bool bOverrideLinkedAnimLayerPriority);
    
    UFUNCTION(BlueprintCallable)
    bool PopRotationMode(int32 InHandle);
    
    UFUNCTION(BlueprintCallable)
    bool PopMovementProfile(int32 InHandle);
    
    UFUNCTION(BlueprintCallable)
    bool PopLinkedAnimLayersByHandle(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    bool PopLinkedAnimLayers(TSubclassOf<UAnimInstance> LinkedAnimLayersClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAnimInstanceInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MatchAnyConditionFromSet(const URebelLocomotionConditionSet* ConditionSet, bool bUpdateStateFromAnimData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MatchAllConditionFromSet(const URebelLocomotionConditionSet* ConditionSet) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleOnScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrinkable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDawnwalkerCharacterMovement* GetRebelCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOverrideCharacterMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLookTargetSocketTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLookSourceSocketTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookSourceLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLockToNavMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDrinkableFlag() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInteractableState GetInteractableState() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFocusedSocketTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFocusedLocation(const AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreatureType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCharacterSocketLocation(const FGameplayTag& SocketTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioCharacterCommonBaseComponent* GetAudioCharacterCommonBaseComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearFocusedSocketTag();
    
    UFUNCTION(BlueprintCallable)
    int32 AddLookAtTarget(const FInstancedStruct& LookAtTargetData);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool IsBossCharacter() const override PURE_VIRTUAL(IsBossCharacter, return false;);
    
};

