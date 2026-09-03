#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AbilityTask.h"
#include "DogwoodPlaySyncedMontagesNotifyDelegateDelegate.h"
#include "DogwoodAbilityTask_PlaySyncedMontages.generated.h"

class ACharacter;
class UAnimMontage;
class UDogwoodAbilityTask_PlaySyncedMontages;
class UGameplayAbility;

UCLASS(Blueprintable)
class DOGWOODABILITYSYSTEM_API UDogwoodAbilityTask_PlaySyncedMontages : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDogwoodPlaySyncedMontagesNotifyDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDogwoodPlaySyncedMontagesNotifyDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDogwoodPlaySyncedMontagesNotifyDelegate OnCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDogwoodPlaySyncedMontagesNotifyDelegate OnNotifyBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDogwoodPlaySyncedMontagesNotifyDelegate OnNotifyEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* OwnerMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* TargetMontage;
    
public:
    UDogwoodAbilityTask_PlaySyncedMontages();

    UFUNCTION()
    static UDogwoodAbilityTask_PlaySyncedMontages* PlaySyncedMontages(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* InOwnerMontage, ACharacter* InTargetCharacter, UAnimMontage* InTargetMontage, float Rate, bool bStopWhenAbilityEnds, bool bInstantSync, int32 SectionNumber);
    
protected:
    UFUNCTION()
    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION()
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendedIn(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityCancelled();
    
};

