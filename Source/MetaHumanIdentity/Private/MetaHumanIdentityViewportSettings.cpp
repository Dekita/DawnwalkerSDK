#include "MetaHumanIdentityViewportSettings.h"

UMetaHumanIdentityViewportSettings::UMetaHumanIdentityViewportSettings() {
    this->SelectedTreeNode = EIdentityTreeNodeIdentifier::None;
}

void UMetaHumanIdentityViewportSettings::ToggleTemplateMeshVisibility(EABImageViewMode InView) {
}

void UMetaHumanIdentityViewportSettings::ToggleCurrentPoseVisibility(EABImageViewMode InView) {
}

void UMetaHumanIdentityViewportSettings::SetSelectedPromotedFrame(EIdentityPoseType InPoseType, int32 InPromotedFrameIndex) {
}

void UMetaHumanIdentityViewportSettings::SetFrameTimeForPose(EIdentityPoseType InPoseType, const FFrameTime& InFrameTime) {
}

bool UMetaHumanIdentityViewportSettings::IsTemplateMeshVisible(EABImageViewMode InView) const {
    return false;
}

bool UMetaHumanIdentityViewportSettings::IsCurrentPoseVisible(EABImageViewMode InView) const {
    return false;
}

int32 UMetaHumanIdentityViewportSettings::GetSelectedPromotedFrame(EIdentityPoseType InPoseType) const {
    return 0;
}

FFrameTime UMetaHumanIdentityViewportSettings::GetFrameTimeForPose(EIdentityPoseType InPoseType) const {
    return FFrameTime{};
}


