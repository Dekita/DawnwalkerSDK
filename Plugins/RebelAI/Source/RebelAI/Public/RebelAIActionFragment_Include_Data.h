#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "RebelAI_HookData.h"
#include "RebelAI_Include_Override.h"
#include "RebelAIActionFragment_Include_Data.generated.h"

class URebelGenericTree;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragment_Include_Data {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelGenericTree* Tree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotFinalize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> RootNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAI_HookData> HookedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAI_Include_Override> OveriddenParams;
    
    FRebelAIActionFragment_Include_Data();
};

