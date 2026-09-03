#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MetaHumanFaceContourTrackerAsset.generated.h"

class UNNEModelData;

UCLASS(Blueprintable)
class METAHUMANFACECONTOURTRACKER_API UMetaHumanFaceContourTrackerAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNNEModelData> FaceDetectorModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNNEModelData> FullFaceTrackerModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNNEModelData> BrowsDenseTrackerModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNNEModelData> EyesDenseTrackerModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNNEModelData> NasioLabialsDenseTrackerModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNNEModelData> MouthDenseTrackerModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNNEModelData> LipzipDenseTrackerModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNNEModelData> ChinDenseTrackerModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNNEModelData> TeethDenseTrackerModelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNNEModelData> TeethConfidenceTrackerModelData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNNEModelData*> LoadedTrackerModelData;
    
public:
    UMetaHumanFaceContourTrackerAsset();

};

