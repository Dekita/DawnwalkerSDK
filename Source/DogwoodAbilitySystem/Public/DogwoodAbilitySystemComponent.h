#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectQuery.h"
#include "GameplayTagContainer.h"
#include "OnBleedingEffectReappliedDelegate.h"
#include "RuntimePersistentEffectData.h"
#include "Templates/SubclassOf.h"
#include "DogwoodAbilitySystemComponent.generated.h"

class UDogwoodAbilitySubsystem;
class UGameplayEffect;
class UPersistencyComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODABILITYSYSTEM_API UDogwoodAbilitySystemComponent : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBleedingEffectReapplied OnBleedingEffectReapplied;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRuntimePersistentEffectData> PersistentEffects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPersistencyComponent* PersistencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDogwoodAbilitySubsystem* AbilitySubsystem;
    
public:
    UDogwoodAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ProlongEffects(const FGameplayEffectQuery& Query, float ProlongValue, bool bPercent, bool bSetCurrentTimeAsStartTime, const FGameplayTag& GameplayCueTag);
    
    UFUNCTION(BlueprintCallable)
    void ProlongEffect(UPARAM(Ref) FActiveGameplayEffectHandle& Handle, float ProlongValue, bool bPercent, bool bSetCurrentTimeAsStartTime);
    
    UFUNCTION(BlueprintCallable)
    bool GetEffectUsesSegments(const FActiveGameplayEffectHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEffectSegmentsLeft(const FActiveGameplayEffectHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEffectDurationInSegments(const FActiveGameplayEffectHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectClassDurationAdditionalSegments(const TSubclassOf<UGameplayEffect> GameplayEffectClass) const;
    
    UFUNCTION(BlueprintCallable)
    void ExtendGameplayEffectDuration(UPARAM(Ref) FActiveGameplayEffectHandle& Handle, float ExtraTime, bool bAddToRemainingTime);
    
};

