#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAIStateTreePropertyFunc_AIStub_GetTargetLocation_InstanceData.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_AIStub_GetTargetLocation_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URebelAIStub> AIStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Result;
    
    FRebelAIStateTreePropertyFunc_AIStub_GetTargetLocation_InstanceData();
};

