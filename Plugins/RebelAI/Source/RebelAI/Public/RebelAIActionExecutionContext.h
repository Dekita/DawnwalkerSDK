#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RebelAIActionDesc.h"
#include "RebelAIActionExecutionContext.generated.h"

class UGameplayAbility;
class URebelAIStub;

UCLASS(Blueprintable)
class REBELAI_API URebelAIActionExecutionContext : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> AIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> GCReferencedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InterruptedActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIActionDesc ActionDesc;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Timestamp;
    
public:
    URebelAIActionExecutionContext();

    UFUNCTION(BlueprintCallable)
    void StopPlayingMontages(float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop(bool bStopMontages);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAbilityEnded(UGameplayAbility* Ability);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintPure)
    double GetTimeStamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetActionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRebelAIActionDesc GetActionDesc() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTag(const FGameplayTag& Tag);
    
};

