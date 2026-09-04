#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelAIActionFragment_BlueprintBase.generated.h"

class URebelAIActionExecutionContext;
class URebelAIStub;

UCLASS(Blueprintable)
class REBELAI_API URebelAIActionFragment_BlueprintBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopCollectingOtherAssets;
    
public:
    URebelAIActionFragment_BlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Release(URebelAIStub* GetAIStub, URebelAIActionExecutionContext* ActionCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Process(const URebelAIStub* AIStub, URebelAIActionExecutionContext* ExecutionContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Finish() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Execute(const URebelAIStub* AIStub, URebelAIActionExecutionContext* ExecutionContext);
    
};

