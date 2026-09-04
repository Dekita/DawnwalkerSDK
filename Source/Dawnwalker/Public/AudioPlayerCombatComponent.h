#pragma once
#include "CoreMinimal.h"
#include "EAttackStrength.h"
#include "EClothingSoundType.h"
#include "GameplayTagContainer.h"
#include "AudioCharacterCombatComponentBase.h"
#include "AudioPlayerCombatComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAudioPlayerCombatComponent : public UAudioCharacterCombatComponentBase {
    GENERATED_BODY()
public:
    UAudioPlayerCombatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnResetCombatNotifyStates();
    
    UFUNCTION(BlueprintCallable)
    void OnParryImpact(FGameplayTag AttackerWeaponTag, FGameplayTag DefenderWeaponTag, AActor* AttackingCharacter, AActor* DefendingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnOmniBlockImpact(FGameplayTag AttackerWeaponTag, FGameplayTag DefenderWeaponTag, AActor* AttackingCharacter, AActor* DefendingCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnIsPlayerVampireChanged(bool bIsVampire);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHitImpact(EAttackStrength AttackStrength, FGameplayTag WeaponSoundTag, EClothingSoundType ClothingSoundType, AActor* AttackingCharacter, AActor* DefendingCharacter, bool bIsStunned);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockImpact(FGameplayTag AttackerWeaponTag, FGameplayTag DefenderWeaponTag, AActor* AttackingCharacter, AActor* DefendingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackActiveFrameEntered();
    
};

