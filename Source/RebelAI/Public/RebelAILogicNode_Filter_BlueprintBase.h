#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelAILogicTree_ExecutionContextHandle.h"
#include "RebelAINodeHandle.h"
#include "RebelAILogicNode_Filter_BlueprintBase.generated.h"

class URebelAILogicTree_ServiceProxy;
class URebelAIStub;

UCLASS(Blueprintable)
class REBELAI_API URebelAILogicNode_Filter_BlueprintBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* OwnerAIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAILogicTree_ServiceProxy* LTServiceProxy;
    
public:
    URebelAILogicNode_Filter_BlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool MeetsCriteria() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnerValidAndInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRebelAINodeHandle GetNodeHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetLabel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetIconName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRebelAILogicTree_ExecutionContextHandle GetExecutionContextHandle() const;
    
};

