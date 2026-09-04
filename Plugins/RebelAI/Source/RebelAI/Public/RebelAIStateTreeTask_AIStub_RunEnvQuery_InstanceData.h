#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "StateTreePropertyRef.h"
#include "RebelAIStateTreeTask_AIStub_InstanceData.h"
#include "RebelAIStateTreeTask_AIStub_RunEnvQuery_InstanceData.generated.h"

class UEnvQuery;

USTRUCT(BlueprintType)
struct FRebelAIStateTreeTask_AIStub_RunEnvQuery_InstanceData : public FRebelAIStateTreeTask_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreePropertyRef Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
    REBELAI_API FRebelAIStateTreeTask_AIStub_RunEnvQuery_InstanceData();
};

