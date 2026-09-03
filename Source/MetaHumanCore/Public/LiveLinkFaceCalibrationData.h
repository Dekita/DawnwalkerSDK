#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Dimensions.h"
#include "LiveLinkFaceCalibrationData.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORE_API FLiveLinkFaceCalibrationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDimensions VideoDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDimensions DepthDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LensDistortionCenter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> IntrinsicMatrix;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> LensDistortionLookupTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> InverseLensDistortionLookupTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PixelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDimensions IntrinsicMatrixReferenceDimensions;
    
    FLiveLinkFaceCalibrationData();
};

