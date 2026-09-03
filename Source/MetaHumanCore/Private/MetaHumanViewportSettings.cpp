#include "MetaHumanViewportSettings.h"

UMetaHumanViewportSettings::UMetaHumanViewportSettings() {
    this->CurrentViewMode = EABImageViewMode::A;
    this->DepthNear = 10.00f;
    this->DepthFar = 100.00f;
}

void UMetaHumanViewportSettings::ToggleSkeletalMeshVisibility(EABImageViewMode InView) {
}

void UMetaHumanViewportSettings::ToggleShowCurves(EABImageViewMode InView) {
}

void UMetaHumanViewportSettings::ToggleShowControlVertices(EABImageViewMode InView) {
}

void UMetaHumanViewportSettings::ToggleFootageVisibility(EABImageViewMode InView) {
}

void UMetaHumanViewportSettings::ToggleDistortion(EABImageViewMode InView) {
}

void UMetaHumanViewportSettings::ToggleDepthMeshVisibility(EABImageViewMode InView) {
}

void UMetaHumanViewportSettings::SetViewModeIndex(EABImageViewMode InView, TEnumAsByte<EViewModeIndex> InViewModeIndex, bool bInNotify) {
}

void UMetaHumanViewportSettings::SetEV100(EABImageViewMode InView, float InValue, bool bInNotify) {
}

bool UMetaHumanViewportSettings::IsSkeletalMeshVisible(EABImageViewMode InView) const {
    return false;
}

bool UMetaHumanViewportSettings::IsShowingUndistorted(EABImageViewMode InView) const {
    return false;
}

bool UMetaHumanViewportSettings::IsShowingSingleView() const {
    return false;
}

bool UMetaHumanViewportSettings::IsShowingCurves(EABImageViewMode InView) const {
    return false;
}

bool UMetaHumanViewportSettings::IsShowingControlVertices(EABImageViewMode InView) const {
    return false;
}

bool UMetaHumanViewportSettings::IsFootageVisible(EABImageViewMode InView) {
    return false;
}

bool UMetaHumanViewportSettings::IsDepthMeshVisible(EABImageViewMode InView) const {
    return false;
}

TEnumAsByte<EViewModeIndex> UMetaHumanViewportSettings::GetViewModeIndex(EABImageViewMode InView) {
    return VMI_BrushWireframe;
}

float UMetaHumanViewportSettings::GetEV100(EABImageViewMode InView) {
    return 0.0f;
}


