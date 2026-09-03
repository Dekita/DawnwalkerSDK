#pragma once
#include "CoreMinimal.h"
#include "BiomeMaskParameterData.generated.h"

class UAkRtpc;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FBiomeMaskParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AffectGlobal;
    
    FBiomeMaskParameterData();
};

