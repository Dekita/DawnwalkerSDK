#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "SPCRJointPair.generated.h"

USTRUCT(BlueprintType)
struct SPCRJOINTDYNAMICS_API FSPCRJointPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference RootBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference EndBone;
    
    FSPCRJointPair();
};

