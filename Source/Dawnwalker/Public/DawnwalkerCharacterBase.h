#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterAttitude.h"
#include "ELootGenerationSource.h"
#include "InventoryLevelProvider.h"
#include "CharacterAbilitiesInterface.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "PersistentIDProvider.h"
#include "GuardAreaReceiver.h"
#include "DawnwalkerCommonCharacterBase.h"
#include "OnAttributeChangedSignatureDelegate.h"
#include "OnDiedDelegateDelegate.h"
#include "OnJumpedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "DawnwalkerCharacterBase.generated.h"

class AActor;
class UAkComponent;
class UAudioCharacterBaseComponent;
class UCharacterAbilityConfig;
class UCharacterBaseAttributeSet;
class UCombatSoundParametersBase;
class UDWCharacterGapSqueezeComponent;
class UDawnwalkerAbilitySystemComponent;
class UGameplayAbility;
class UGameplayEffect;
class UInventoryComponent;
class UMaterialInterface;
class UMotionWarpingComponent;
class USceneComponent;
class USkinnedDecalSampler;
class UTextRenderComponent;
class UWoundContainerComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerCharacterBase : public ADawnwalkerCommonCharacterBase, public IAbilitySystemInterface, public IPersistentIDProvider, public IGameplayTagAssetInterface, public IGuardAreaReceiver, public IInventoryLevelProvider, public ICharacterAbilitiesInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* SpawnedTextRenderComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDawnwalkerAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWoundContainerComponent* WoundContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWCharacterGapSqueezeComponent* GapSqueezeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMotionWarpingComponent* MotionWarpingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedDecalSampler* SkinnedDecalSampler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterBaseAttributeSet* CharacterAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HeldObjectRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HeldObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatSoundParametersBase* CombatSoundParameters;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJumpedSignature OnJumpedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDiedDelegate OnDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeChangedSignature OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeChangedSignature OnStaminaChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeChangedSignature OnBloodHealthRestorationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeChangedSignature OnDealtDamageChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeChangedSignature OnInstantDamageChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioCharacterBaseComponent* AudioCharacterBaseComponent;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefinitionAncestor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SprintBlockingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RunBlockingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer JumpBlockingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BossName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterAbilityConfig* CharacterAbilityConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> DefaultAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> DefaultEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExhaustionAffectsHealth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultMaxCharacterSpeed;
    
public:
    ADawnwalkerCharacterBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHeldObject();
    
public:
    UFUNCTION(BlueprintCallable)
    FVector SpawnSkinnedDecalFromPoint(FVector Point, float Size, int32 MinIndex, int32 MaxIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialOverlayFromAbility(UMaterialInterface* NewOverlayMaterial, bool bApplyAlsoOnGarments);
    
    UFUNCTION(BlueprintCallable)
    void SetClawsExtended(bool bExtended);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshDefinition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResurrection();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryContentsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInstantDamageReceived();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OneLinersBlockedFromAP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeath();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClawExtensionStateChanged(bool bNewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttitudeChanged(const ECharacterAttitude Attitude);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorHiddenInGameChanged(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FName GetNearestSocketForSkinnedMeshDecal(FVector Location);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBossName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimCurveValue(FName CurveName) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GenerateLoot(ELootGenerationSource GenerationSource);
    
    UFUNCTION(BlueprintCallable)
    void ClearHeldObject();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanRun() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AttachToHand(TSubclassOf<AActor> ActorClass, bool bLeftHand, FTransform Offset);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer BP_GetOwnedGameplayTags() const override PURE_VIRTUAL(BP_GetOwnedGameplayTags, return FGameplayTagContainer{};);

    // IAbilitySystemInterface: real implementation unknown, but this class already holds the component, so return it.
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

};

