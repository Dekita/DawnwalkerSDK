#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "RebelSpineIKLinkedFoot.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelSpineIKLinkedFoot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference FootRefBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference FootBone;
    
    FRebelSpineIKLinkedFoot();
};

