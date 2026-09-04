#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "RebelGenericTreeBindingData.h"
#include "RebelAI_HookData.h"
#include "RebelAI_Include_Override.h"
#include "RebelAILogicNode_Include_Data.generated.h"

class URebelGenericTree;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Include_Data {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelGenericTree* Tree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotFinalize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelGenericTreeBindingData> IncludeTreeBindingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> RootNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> InstanceDataTemplates;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, uint16> InstanceDataIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebelGenericTreeBindingData> BindingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAI_HookData> HookedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAI_Include_Override> OveriddenParams;
    
    FRebelAILogicNode_Include_Data();
};

