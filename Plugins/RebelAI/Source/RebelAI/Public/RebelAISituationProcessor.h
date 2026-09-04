#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "RebelAIEvent.h"
#include "RegisteredReaction.h"
#include "RebelAISituationProcessor.generated.h"

class URebelAIReactionsController;
class URebelAIStub;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAISituationProcessor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> PreConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> Conditions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIReactionsController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URebelAIStub*, FRegisteredReaction> RegisteredReactions;
    
public:
    URebelAISituationProcessor();

    UFUNCTION(BlueprintCallable)
    void ExecuteForStub(URebelAIStub* Stub, URebelAIStub* Instigator, const bool bResumed, const FGameplayTag SignalSituation, FInstancedStruct OverrideReaction);
    
    UFUNCTION(BlueprintCallable)
    void Execute(URebelAIStub* Instigator);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEvent(const FRebelAIEvent& Event);
    
};

