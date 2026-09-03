#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EIdentityErrorCode.h"
#include "EIdentityPoseType.h"
#include "IdentityHashes.h"
#include "Templates/SubclassOf.h"
#include "MetaHumanIdentity.generated.h"

class UMetaHumanIdentityPart;
class UMetaHumanIdentityPose;
class UMetaHumanIdentityPromotedFrame;
class UMetaHumanIdentityViewportSettings;
class UThumbnailInfo;

UCLASS(Blueprintable)
class METAHUMANIDENTITY_API UMetaHumanIdentity : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAutoRigServiceFinishedDynamicDelegate, bool, bInSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAutoRigServiceFinishedDynamicDelegate OnAutoRigServiceFinishedDynamicDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMetaHumanIdentityPart*> Parts;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UThumbnailInfo* ThumbnailInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMetaHumanIdentityViewportSettings* ViewportSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MeshTrackerVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdentityHashes IdentityHashes;
    
    UMetaHumanIdentity();

    UFUNCTION(BlueprintCallable)
    void StartFrameTrackingPipeline(const TArray<FColor>& InImageData, int32 InWidth, int32 InHeight, const FString& InDepthFramePath, UMetaHumanIdentityPose* InPose, UMetaHumanIdentityPromotedFrame* InPromotedFrame, bool bInShowProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockingProcessing(bool bInBlockingProcessing);
    
    UFUNCTION(BlueprintCallable)
    void LogInToAutoRigService();
    
    UFUNCTION(BlueprintCallable)
    bool IsLoggedInToService();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrameTrackingPipelineProcessing() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoRiggingInProgress();
    
    UFUNCTION(BlueprintCallable)
    static bool HandleError(EIdentityErrorCode InErrorCode, bool bInLogOnly);
    
    UFUNCTION(BlueprintCallable)
    UMetaHumanIdentityPart* GetOrCreatePartOfClass(TSubclassOf<UMetaHumanIdentityPart> InPartClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMetaHumanIdentityPart* FindPartOfClass(TSubclassOf<UMetaHumanIdentityPart> InPartClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DiagnosticsIndicatesProcessingIssue(FText& OutDiagnosticsWarningMessage) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateDNAForIdentity(bool bInAddMetaHumanToCreator, bool bInLogOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddPoseOfClass(TSubclassOf<UMetaHumanIdentityPose> InPoseClass, EIdentityPoseType InPoseType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddPartOfClass(TSubclassOf<UMetaHumanIdentityPart> InPartClass) const;
    
};

