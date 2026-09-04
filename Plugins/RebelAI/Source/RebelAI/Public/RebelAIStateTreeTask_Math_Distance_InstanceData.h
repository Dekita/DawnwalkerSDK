#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAIStateTreeTask_Math_Distance_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_Math_Distance_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector B;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    FRebelAIStateTreeTask_Math_Distance_InstanceData();
};

