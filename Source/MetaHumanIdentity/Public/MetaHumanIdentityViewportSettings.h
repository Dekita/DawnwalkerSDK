#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EABImageViewMode.h"
#include "MetaHumanViewportSettings.h"
#include "EIdentityPoseType.h"
#include "EIdentityTreeNodeIdentifier.h"
#include "MetaHumanIdentityABViewportState.h"
#include "MetaHumanIdentityPoseState.h"
#include "MetaHumanIdentityViewportSettings.generated.h"

UCLASS(Blueprintable)
class METAHUMANIDENTITY_API UMetaHumanIdentityViewportSettings : public UMetaHumanViewportSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EIdentityTreeNodeIdentifier SelectedTreeNode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIdentityPoseType, FMetaHumanIdentityPoseState> IdentityPosesState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EABImageViewMode, FMetaHumanIdentityABViewportState> IdentityViewportState;
    
public:
    UMetaHumanIdentityViewportSettings();

    UFUNCTION(BlueprintCallable)
    void ToggleTemplateMeshVisibility(EABImageViewMode InView);
    
    UFUNCTION(BlueprintCallable)
    void ToggleCurrentPoseVisibility(EABImageViewMode InView);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedPromotedFrame(EIdentityPoseType InPoseType, int32 InPromotedFrameIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameTimeForPose(EIdentityPoseType InPoseType, const FFrameTime& InFrameTime);
    
    UFUNCTION(BlueprintPure)
    bool IsTemplateMeshVisible(EABImageViewMode InView) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentPoseVisible(EABImageViewMode InView) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedPromotedFrame(EIdentityPoseType InPoseType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameTime GetFrameTimeForPose(EIdentityPoseType InPoseType) const;
    
};

