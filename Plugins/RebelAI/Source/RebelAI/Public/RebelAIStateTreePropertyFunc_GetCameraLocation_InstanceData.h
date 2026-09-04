#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAIStateTreePropertyFunc_GetCameraLocation_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreePropertyFunc_GetCameraLocation_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Result;
    
    FRebelAIStateTreePropertyFunc_GetCameraLocation_InstanceData();
};

