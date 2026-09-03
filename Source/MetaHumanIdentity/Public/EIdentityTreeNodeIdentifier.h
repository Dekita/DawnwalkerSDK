#pragma once
#include "CoreMinimal.h"
#include "EIdentityTreeNodeIdentifier.generated.h"

UENUM()
enum class EIdentityTreeNodeIdentifier : int32 {
    None,
    IdentityRoot,
    TemplateMesh,
    SkeletalMesh,
    FaceNode,
    BodyNode,
    FacePoseList,
    FaceNeutralPose,
    FaceTeethPose,
};

