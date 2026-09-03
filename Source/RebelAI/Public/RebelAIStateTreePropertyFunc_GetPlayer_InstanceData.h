#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreePropertyFunc_GetPlayer_InstanceData.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_GetPlayer_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Result;
    
    FRebelAIStateTreePropertyFunc_GetPlayer_InstanceData();
};

