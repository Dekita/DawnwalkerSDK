#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerBoneTraceData.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerBoneTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMandatory;
    
    FDawnwalkerBoneTraceData();
};

