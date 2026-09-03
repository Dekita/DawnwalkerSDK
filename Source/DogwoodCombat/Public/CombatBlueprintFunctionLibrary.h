#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AlphaBlend.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Animation/AnimInstance.h"
#include "Engine/TimerHandle.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayAttribute.h"
#include "GameplayTagContainer.h"
#include "ECombatNotifyType.h"
#include "EWeaponSwingDirection.h"
#include "MetricsScalingSettings.h"
#include "Templates/SubclassOf.h"
#include "CombatBlueprintFunctionLibrary.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAnimInstance;
class UAnimMontage;
class UAnimNotify_CombatNotifyState;
class UDataTable;
class UFocusAbilityBase;
class UFocusAttack;
class UItemWeaponDataAsset;
class URebelAIStub;
class UStaticMesh;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UCombatBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCombatBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopMontageWithBlend(UAnimInstance* AnimInstance, TSoftObjectPtr<UDataTable> CustomBlendTimesMatrix, const FGameplayTag& OutTag, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static void SetAttributeValue(UAbilitySystemComponent* AttributeOwner, UPARAM(Ref) FGameplayAttribute& AttributeToSet, float AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    static float PlayMontageWithBlend(UAnimInstance* AnimInstance, TSoftObjectPtr<UDataTable> CustomBlendTimesMatrix, UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
    
    UFUNCTION(BlueprintCallable)
    static void PauseMontageOnTime(FTimerHandle& Timer, UAnimInstance* AnimInstance, UAnimMontage* MontageToPause, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void ModifyGameplayEffectStartTime(UAbilitySystemComponent* EffectOwnerASC, FActiveGameplayEffectHandle Handle, float StartTimeDiff);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAdditiveHit(const UAnimMontage* MontageToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorLeftOriented(AActor* Actor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorInFrontOfOtherActor(AActor* Actor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    static UStaticMesh* GetWeaponStaticMesh(UItemWeaponDataAsset* Weapon);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetTagFromMontageData(const UAnimMontage* MontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    static float GetRootMotionScalingFromMontage(UAnimInstance* AnimInstance, const UAnimMontage* AnimMontage, FMetricsScalingSettings& MetricsScalingSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetReflectDamageDirectionTag(EWeaponSwingDirection SwingDirection);
    
    UFUNCTION(BlueprintCallable)
    static float GetPlayrateForMontage(UAnimMontage* AnimMontage, const FMetricsScalingSettings& MetricsScalingSettings);
    
    UFUNCTION(BlueprintCallable)
    static float GetPercentageValueInAngleBounds(AActor* Instigator, AActor* FocusTarget, float Angle, AActor* TestActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetParryPointNotificationTime(URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHitWindowTime(URebelAIStub* AIStub, bool bEndTime);
    
    UFUNCTION(BlueprintCallable)
    static float GetFocusAttackSuccessChance(TSubclassOf<UFocusAttack> FocusAttack, UAbilitySystemComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    static UAnimNotify_CombatNotifyState* GetFirstNotify(ECombatNotifyType CombatNotifyType, const UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static float GetDeltaAngleToTestActor(AActor* Instigator, AActor* TestActor);
    
    UFUNCTION(BlueprintCallable)
    static float GetCustomRootMotionScaleFromMontageData(const UAnimMontage* MontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    static float GetCustomRootMotionMultiplayer(const UAnimMontage* MontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCustomBlendForMontage(const UAnimMontage* MontageToPlay, FGameplayTag PreviousAnimTag, FAlphaBlend& OutBlend);
    
    UFUNCTION(BlueprintCallable)
    static float GetBlendTimeForTags(const FGameplayTag& Old, const FGameplayTag& New, const UDataTable* BlendTimeMatrix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetAttackDirectionTag(const URebelAIStub* Stub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetActorsSortedRightToLeftFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData, UPARAM(Ref) FVector& PlayerLocation, UPARAM(Ref) FVector& ForwardVectorRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* FindNearestAliveTargetForAbility(AActor* ActorOrigin, UFocusAbilityBase* Ability);
    
    UFUNCTION(BlueprintCallable)
    static void FilterActorsInCone(AActor* Instigator, AActor* FocusTarget, UPARAM(Ref) TArray<AActor*>& Actors, float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EWeaponSwingDirection ComboTagToAttackSwingDirection(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckSpaceForActor(AActor* Actor, FVector RelativeDir, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreInstantCombosEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool AreHitWindowsCover(float CoverThreshold, URebelAIStub* Attacker, URebelAIStub* Target);
    
};

