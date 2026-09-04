#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FlowOwnerFunctionParams.generated.h"

class UFlowNode_CallOwnerFunction;

UCLASS(Blueprintable, EditInlineNew)
class FLOW_API UFlowOwnerFunctionParams : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFlowNode_CallOwnerFunction* SourceNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ExecutedInputPinName;
    
public:
    UFlowOwnerFunctionParams();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldFinishForOutputName(const FName& OutputName) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PreExecute();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PostExecute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> BP_GetOutputNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> BP_GetInputNames() const;
    
};

