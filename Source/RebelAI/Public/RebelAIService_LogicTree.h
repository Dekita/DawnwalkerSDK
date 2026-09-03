#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "RebelAIService.h"
#include "RebelAIService_LogicTree.generated.h"

class UObject;
class URebelAILogicTree_ServiceProxy;
class URebelGenericTree;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIService_LogicTree : public FRebelAIService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, int32> TempTrackedObjects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTreeFromAIStubDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelGenericTree* LogicTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct TaskExecutorServiceDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAILogicTree_ServiceProxy* Proxy;
    
public:
    FRebelAIService_LogicTree();
};

