#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "TorchAbility.generated.h"

class ADawnwalkerCharacterBase;
class UAbilityTask_WaitGameplayTagAdded;
class UDogwoodCharacterAnimInstance_AnimLayer;

UCLASS(Blueprintable)
class DAWNWALKER_API UTorchAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDogwoodCharacterAnimInstance_AnimLayer> TorchAnimLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitGameplayTagAdded* CombatStartedTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADawnwalkerCharacterBase> OwnerCharacter;
    
    UTorchAbility();

    UFUNCTION(BlueprintCallable)
    void OnAnimInstanceChanged();
    
};

