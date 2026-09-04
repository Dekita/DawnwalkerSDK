#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFlowLogVerbosity.h"
#include "FlowNode.h"
#include "FlowNode_Log.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNode_Log : public UFlowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlowLogVerbosity Verbosity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor TextColor;
    
public:
    UFlowNode_Log();

};

