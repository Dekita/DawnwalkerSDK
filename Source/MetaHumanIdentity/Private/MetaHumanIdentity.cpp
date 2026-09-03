#include "MetaHumanIdentity.h"
#include "MetaHumanIdentityViewportSettings.h"
#include "Templates/SubclassOf.h"

UMetaHumanIdentity::UMetaHumanIdentity() {
    this->ThumbnailInfo = NULL;
    this->ViewportSettings = CreateDefaultSubobject<UMetaHumanIdentityViewportSettings>(TEXT("MetaHuman Identity Viewport Settings"));
}

void UMetaHumanIdentity::StartFrameTrackingPipeline(const TArray<FColor>& InImageData, int32 InWidth, int32 InHeight, const FString& InDepthFramePath, UMetaHumanIdentityPose* InPose, UMetaHumanIdentityPromotedFrame* InPromotedFrame, bool bInShowProgress) {
}

void UMetaHumanIdentity::SetBlockingProcessing(bool bInBlockingProcessing) {
}

void UMetaHumanIdentity::LogInToAutoRigService() {
}

bool UMetaHumanIdentity::IsLoggedInToService() {
    return false;
}

bool UMetaHumanIdentity::IsFrameTrackingPipelineProcessing() const {
    return false;
}

bool UMetaHumanIdentity::IsAutoRiggingInProgress() {
    return false;
}

bool UMetaHumanIdentity::HandleError(EIdentityErrorCode InErrorCode, bool bInLogOnly) {
    return false;
}

UMetaHumanIdentityPart* UMetaHumanIdentity::GetOrCreatePartOfClass(TSubclassOf<UMetaHumanIdentityPart> InPartClass) {
    return NULL;
}

UMetaHumanIdentityPart* UMetaHumanIdentity::FindPartOfClass(TSubclassOf<UMetaHumanIdentityPart> InPartClass) const {
    return NULL;
}

bool UMetaHumanIdentity::DiagnosticsIndicatesProcessingIssue(FText& OutDiagnosticsWarningMessage) const {
    return false;
}

void UMetaHumanIdentity::CreateDNAForIdentity(bool bInAddMetaHumanToCreator, bool bInLogOnly) {
}

bool UMetaHumanIdentity::CanAddPoseOfClass(TSubclassOf<UMetaHumanIdentityPose> InPoseClass, EIdentityPoseType InPoseType) const {
    return false;
}

bool UMetaHumanIdentity::CanAddPartOfClass(TSubclassOf<UMetaHumanIdentityPart> InPartClass) const {
    return false;
}


