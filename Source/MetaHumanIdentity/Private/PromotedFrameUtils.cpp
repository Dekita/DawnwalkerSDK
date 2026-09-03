#include "PromotedFrameUtils.h"

UPromotedFrameUtils::UPromotedFrameUtils() {
}

bool UPromotedFrameUtils::InitializeContourDataForFootageFrame(UMetaHumanIdentityPose* InPose, UMetaHumanIdentityFootageFrame* InFootageFrame) {
    return false;
}

bool UPromotedFrameUtils::GetPromotedFrameAsPixelArrayFromDisk(const FString& InImagePath, FIntPoint& OutImageSize, TArray<FColor>& OutLocalSamples) {
    return false;
}

FString UPromotedFrameUtils::GetImagePathForFrame(const UFootageCaptureData* InFootageCaptureData, const FString& InCamera, const int32 InFrameId, bool bInIsImageSequence, ETimecodeAlignment InAlignment) {
    return TEXT("");
}


