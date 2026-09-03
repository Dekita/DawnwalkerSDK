#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BloodBarChangedDelegateDelegate.h"
#include "BloodBarSegment.h"
#include "BloodValueChangedDelegateDelegate.h"
#include "FatigueStateChangedDelegateDelegate.h"
#include "BloodBarComponent.generated.h"

class APawn;
class APlayerState;
class UAbilitySystemComponent;
class UVampireAttributeSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODSTATS_API UBloodBarComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBloodBarChangedDelegate OnBloodBarChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFatigueStateChangedDelegate OnFatigueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBloodValueChangedDelegate OnBloodValueChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBloodBarSegment> BloodBarSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVampireAttributeSet* VampireAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* PawnASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* OwningPawn;
    
    UBloodBarComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockBlood();
    
    UFUNCTION(BlueprintCallable)
    void SetBloodPercent(float InBloodPercent);
    
    UFUNCTION(BlueprintCallable)
    void RestorePercentage(float PercentageAmount, bool bIgnorePermDamage);
    
    UFUNCTION(BlueprintCallable)
    void RestoreAmount(float ReplenishAmountLiteral, bool bIgnorePermDamage);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOwningStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockBlood();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFatigued() const;
    
    UFUNCTION(BlueprintCallable)
    void HealAndReplenishAllSegments();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSingleSegmentBloodAmount(int32 SegmentIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSegmentStartBlood(int32 SegmentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSegmentIndexForPermDamage(float Damage, float& DamageInSegment) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSegmentIndexForBloodLevel(float Blood, float& BloodInSegment) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSegmentIndexForBloodHealthRestoration(float BloodHealthRestoration, float& BloodRestorationInSegment) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSegmentCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentBloodBarsScaled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBloodPermDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBloodBarLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlood() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRecoverSegments();
    
};

