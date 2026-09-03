#include "BoneSettings.h"

FBoneSettings::FBoneSettings() {
    this->UseBoneReducer = false;
    this->BoneReductionTargetBoneRatioEnabled = false;
    this->BoneReductionTargetBoneRatio = 0.00f;
    this->BoneReductionTargetBoneCountEnabled = false;
    this->BoneReductionTargetBoneCount = 0;
    this->BoneReductionTargetMaxDeviationEnabled = false;
    this->BoneReductionTargetMaxDeviation = 0.00f;
    this->BoneReductionTargetOnScreenSizeEnabled = false;
    this->BoneReductionTargetOnScreenSize = 0;
    this->BoneReductionTargetStopCondition = EBoneReductionTargetStopCondition::Any;
    this->RemoveUnusedBones = false;
    this->LockBoneSelectionSetID = 0;
    this->RemoveBoneSelectionSetID = 0;
    this->LimitBonesPerVertex = false;
    this->MaxBonePerVertex = 0;
}

