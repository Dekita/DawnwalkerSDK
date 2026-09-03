#pragma once
#include "CoreMinimal.h"
#include "EIdentityPoseType.h"
#include "IdentityHashFlags.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANIDENTITY_API FIdentityHashFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIdentityPoseType, bool> bPoseHashesValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdentitySolveInputsHashValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBodyPartHashValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMeshToMetaHumanInputsHashValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeethFitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeethPoseTrackingPointsHashValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrepareForPerformanceInputsHashValid;
    
    FIdentityHashFlags();
};

