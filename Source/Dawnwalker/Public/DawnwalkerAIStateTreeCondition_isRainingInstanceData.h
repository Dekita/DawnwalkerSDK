#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerAIStateTreeCondition_isRainingInstanceData.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIStateTreeCondition_isRainingInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* AIStub;
    
    FDawnwalkerAIStateTreeCondition_isRainingInstanceData();
};

