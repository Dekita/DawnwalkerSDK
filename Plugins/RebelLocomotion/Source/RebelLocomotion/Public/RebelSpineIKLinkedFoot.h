#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "RebelSpineIKLinkedFoot.generated.h"

USTRUCT(BlueprintType)
struct FRebelSpineIKLinkedFoot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference FootRefBone;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference FootBone;
    
    REBELLOCOMOTION_API FRebelSpineIKLinkedFoot();
};

