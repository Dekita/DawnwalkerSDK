#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAudioProcessingMode.h"
#include "EFrameAnimationQuality.h"
#include "MetaHumanMeshData.h"
#include "FrameAnimationData.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORE_API FFrameAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> RawPoseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> AnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, float> RawAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMetaHumanMeshData MeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrameAnimationQuality AnimationQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAudioProcessingMode AudioProcessingMode;
    
    FFrameAnimationData();
};

