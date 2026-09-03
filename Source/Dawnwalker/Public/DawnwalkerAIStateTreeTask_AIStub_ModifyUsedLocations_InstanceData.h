#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAIStateTreeTask_AIStub_InstanceData.h"
#include "DawnwalkerAIStateTreeTask_AIStub_ModifyUsedLocations_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIStateTreeTask_AIStub_ModifyUsedLocations_InstanceData : public FRebelAIStateTreeTask_AIStub_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FDawnwalkerAIStateTreeTask_AIStub_ModifyUsedLocations_InstanceData();
};

