#include "MetaHumanIdentityPromotedFrame.h"
#include "MetaHumanContourData.h"

UMetaHumanIdentityPromotedFrame::UMetaHumanIdentityPromotedFrame() {
    this->bIsHeadAlignmentSet = false;
    this->bUseToSolve = true;
    this->bIsNavigationLocked = false;
    this->bTrackOnChange = false;
    this->bIsFrontView = false;
    this->ContourTracker = NULL;
    this->ContourData = CreateDefaultSubobject<UMetaHumanContourData>(TEXT("ContourData"));
}

void UMetaHumanIdentityPromotedFrame::ToggleNavigationLocked() {
}

void UMetaHumanIdentityPromotedFrame::SetNavigationLocked(bool bIsLocked) {
}

bool UMetaHumanIdentityPromotedFrame::IsTrackingOnChange() const {
    return false;
}

bool UMetaHumanIdentityPromotedFrame::IsTrackingManually() const {
    return false;
}

bool UMetaHumanIdentityPromotedFrame::IsNavigationLocked() const {
    return false;
}

bool UMetaHumanIdentityPromotedFrame::FrameContoursContainActiveData() const {
    return false;
}

bool UMetaHumanIdentityPromotedFrame::DiagnosticsIndicatesProcessingIssue(float InMinimumDepthMapFaceCoverage, float InMinimumDepthMapFaceWidth, FText& OutDiagnosticsWarningMessage) const {
    return false;
}

bool UMetaHumanIdentityPromotedFrame::CanTrack() const {
    return false;
}


