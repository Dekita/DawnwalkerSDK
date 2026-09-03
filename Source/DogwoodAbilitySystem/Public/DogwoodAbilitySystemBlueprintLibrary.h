#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActiveGameplayEffectHandle.h"
#include "EGameplayEffectDurationType.h"
#include "GameplayEffectSpec.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "DogwoodAbilitySystemBlueprintLibrary.generated.h"

class AActor;
class UAbilitySystemComponent;
class UDogwoodPersistentGEComponent;
class UGameplayAbility;
class UGameplayEffect;
class UObject;

UCLASS(Blueprintable)
class DOGWOODABILITYSYSTEM_API UDogwoodAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDogwoodAbilitySystemBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsEffectInhibited(const UAbilitySystemComponent* OwnerASC, const FActiveGameplayEffectHandle& Effect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetTargetSlowMotionForCompensation(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static UDogwoodPersistentGEComponent* GetGameplayEffectPersistentComponent(TSubclassOf<UGameplayEffect> EffectClass);
    
    UFUNCTION(BlueprintCallable)
    static EGameplayEffectDurationType GetDurationPolicyByEffectSpec(const FGameplayEffectSpec& GameplayEffectSpec);
    
    UFUNCTION(BlueprintCallable)
    static float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetActiveGameplayEffectRemainingDuration(UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetActiveEffectHandleOwnerActorTimeDilation(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetActiveEffectHandleOwnerActor(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetActiveEffectHandleAssetTags(FActiveGameplayEffectHandle ActiveHandle);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayAbility* GetAbilityByEffectSpec(const FGameplayEffectSpec& GameplayEffectSpec);
    
};

