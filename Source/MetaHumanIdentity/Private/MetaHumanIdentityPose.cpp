#include "MetaHumanIdentityPose.h"

UMetaHumanIdentityPose::UMetaHumanIdentityPose() {
    this->PoseType = EIdentityPoseType::Invalid;
    this->bFitEyes = false;
    this->PromotedFrameClass = NULL;
    this->CaptureDataSceneComponent = NULL;
    this->ManualTeethDepthOffset = 0.00f;
    this->CaptureData = NULL;
    this->TimecodeAlignment = ETimecodeAlignment::Relative;
}

void UMetaHumanIdentityPose::SetCaptureData(UCaptureData* InCaptureData) {
}

void UMetaHumanIdentityPose::RemovePromotedFrame(UMetaHumanIdentityPromotedFrame* InPromotedFrame) {
}

void UMetaHumanIdentityPose::LoadDefaultTracker() {
}

bool UMetaHumanIdentityPose::IsCaptureDataValid() const {
    return false;
}

UCaptureData* UMetaHumanIdentityPose::GetCaptureData() const {
    return NULL;
}

UMetaHumanIdentityPromotedFrame* UMetaHumanIdentityPose::AddNewPromotedFrame(int32& OutPromotedFrameIndex) {
    return NULL;
}


