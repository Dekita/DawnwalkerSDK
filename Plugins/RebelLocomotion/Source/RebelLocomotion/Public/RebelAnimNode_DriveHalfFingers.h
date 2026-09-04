#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Animation/BoneReference.h"
#include "RebelAnimNode_DriveHalfFingers.generated.h"

USTRUCT(BlueprintType)
struct REBELLOCOMOTION_API FRebelAnimNode_DriveHalfFingers : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> HandBones;
    
    FRebelAnimNode_DriveHalfFingers();
};

