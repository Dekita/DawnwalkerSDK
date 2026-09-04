#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "GameplayTagContainer.h"
#include "RebelAIControllerBase.h"
#include "RebelAIReactionsController.generated.h"

class URebelAIProjectReactionsConfig;
class URebelAISituationProcessor;
class URebelAIStub;

UCLASS(Blueprintable)
class REBELAI_API URebelAIReactionsController : public URebelAIControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIProjectReactionsConfig* LoadedReactionsConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URebelAISituationProcessor*> Processors;
    
public:
    URebelAIReactionsController();

    UFUNCTION(BlueprintCallable)
    void SignalSituationToStub(URebelAIStub* Stub, const FGameplayTag& SituationTag, URebelAIStub* Instigator, const bool bDeferred, const bool bResumed, const FGameplayTag& SignalSituation, const FInstancedStruct OverrideReaction);
    
};

