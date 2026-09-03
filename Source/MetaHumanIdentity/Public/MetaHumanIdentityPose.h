#pragma once
#include "CoreMinimal.h"
#include "ETimecodeAlignment.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EIdentityPoseType.h"
#include "Templates/SubclassOf.h"
#include "MetaHumanIdentityPose.generated.h"

class UCaptureData;
class UMetaHumanFaceContourTrackerAsset;
class UMetaHumanIdentityPromotedFrame;
class USceneComponent;

UCLASS(Blueprintable)
class METAHUMANIDENTITY_API UMetaHumanIdentityPose : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIdentityPoseType PoseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFitEyes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PoseTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanFaceContourTrackerAsset* DefaultTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMetaHumanIdentityPromotedFrame> PromotedFrameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMetaHumanIdentityPromotedFrame*> PromotedFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CaptureDataSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualTeethDepthOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCaptureData* CaptureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CaptureDataConfig;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Camera;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimecodeAlignment TimecodeAlignment;
    
    UMetaHumanIdentityPose();

    UFUNCTION(BlueprintCallable)
    void SetCaptureData(UCaptureData* InCaptureData);
    
    UFUNCTION(BlueprintCallable)
    void RemovePromotedFrame(UMetaHumanIdentityPromotedFrame* InPromotedFrame);
    
    UFUNCTION(BlueprintCallable)
    void LoadDefaultTracker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCaptureDataValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCaptureData* GetCaptureData() const;
    
    UFUNCTION(BlueprintCallable)
    UMetaHumanIdentityPromotedFrame* AddNewPromotedFrame(int32& OutPromotedFrameIndex);
    
};

