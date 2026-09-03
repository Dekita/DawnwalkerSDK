#pragma once
#include "CoreMinimal.h"
#include "ETimecodeAlignment.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PromotedFrameUtils.generated.h"

class UFootageCaptureData;
class UMetaHumanIdentityFootageFrame;
class UMetaHumanIdentityPose;

UCLASS(Blueprintable)
class METAHUMANIDENTITY_API UPromotedFrameUtils : public UObject {
    GENERATED_BODY()
public:
    UPromotedFrameUtils();

    UFUNCTION(BlueprintCallable)
    static bool InitializeContourDataForFootageFrame(UMetaHumanIdentityPose* InPose, UMetaHumanIdentityFootageFrame* InFootageFrame);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPromotedFrameAsPixelArrayFromDisk(const FString& InImagePath, FIntPoint& OutImageSize, TArray<FColor>& OutLocalSamples);
    
    UFUNCTION(BlueprintCallable)
    static FString GetImagePathForFrame(const UFootageCaptureData* InFootageCaptureData, const FString& InCamera, const int32 InFrameId, bool bInIsImageSequence, ETimecodeAlignment InAlignment);
    
};

