#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "GameplayTagContainer.h"
#include "RebelAILogicNode_Task_SimpleAction_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Task_SimpleAction_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ASCLooseTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Params;
    
    FRebelAILogicNode_Task_SimpleAction_InstanceData();
};

