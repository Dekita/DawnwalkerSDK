#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterSoundsComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UCharacterSoundsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCharacterSoundsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvincibilityStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvincibilityEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInstantDamageReceived();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitDodged(AActor* AttackingCharacter, AActor* DefendingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGuardExited();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGuardEntered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDodgeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDied();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlockAnimationTriggered(AActor* DefendingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackAnimationTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackActiveFrameExited();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttackActiveFrameEntered();
    
};

