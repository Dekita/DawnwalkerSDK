#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "TwistBoneEntry.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FTwistBoneEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TwistBlend;
    
    FTwistBoneEntry();
};

