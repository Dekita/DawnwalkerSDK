#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "RebelAINodeHandle.h"
#include "RebelAI_HookData.h"
#include "RebelAILogicNode.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> Decorators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAI_HookData Hook;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAINodeHandle ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExpanded: 1;
    
public:
    FRebelAILogicNode();
};

