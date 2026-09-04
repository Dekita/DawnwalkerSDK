#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreePropertyFunc_AIStub_CombatArena_GetRadius_InstanceData.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_AIStub_CombatArena_GetRadius_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* AIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    FRebelAIStateTreePropertyFunc_AIStub_CombatArena_GetRadius_InstanceData();
};

