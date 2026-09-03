#pragma once
#include "CoreMinimal.h"
#include "AbilityEndedData.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RebelAISituationProcessor.h"
#include "DawnwalkerAISituationProcessor_StubAbilityCommited.generated.h"

class UGameplayAbility;
class URebelAIStub;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UDawnwalkerAISituationProcessor_StubAbilityCommited : public URebelAISituationProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGameplayAbility*> ActiveAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> InstigatorPtr;
    
public:
    UDawnwalkerAISituationProcessor_StubAbilityCommited();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAbilityEnded(const FAbilityEndedData& AbilityEnded);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityCommitted(UGameplayAbility* Ability);
    
};

