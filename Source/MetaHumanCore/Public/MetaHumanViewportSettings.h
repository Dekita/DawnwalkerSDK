#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "EABImageViewMode.h"
#include "MetaHumanViewportCameraState.h"
#include "MetaHumanViewportState.h"
#include "MetaHumanViewportSettings.generated.h"

UCLASS(Blueprintable)
class METAHUMANCORE_API UMetaHumanViewportSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EABImageViewMode CurrentViewMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepthNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepthFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanViewportCameraState CameraState;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EABImageViewMode, FMetaHumanViewportState> ViewportState;
    
public:
    UMetaHumanViewportSettings();

    UFUNCTION(BlueprintCallable)
    void ToggleSkeletalMeshVisibility(EABImageViewMode InView);
    
    UFUNCTION(BlueprintCallable)
    void ToggleShowCurves(EABImageViewMode InView);
    
    UFUNCTION(BlueprintCallable)
    void ToggleShowControlVertices(EABImageViewMode InView);
    
    UFUNCTION(BlueprintCallable)
    void ToggleFootageVisibility(EABImageViewMode InView);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDistortion(EABImageViewMode InView);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDepthMeshVisibility(EABImageViewMode InView);
    
    UFUNCTION(BlueprintCallable)
    void SetViewModeIndex(EABImageViewMode InView, TEnumAsByte<EViewModeIndex> InViewModeIndex, bool bInNotify);
    
    UFUNCTION(BlueprintCallable)
    void SetEV100(EABImageViewMode InView, float InValue, bool bInNotify);
    
    UFUNCTION(BlueprintPure)
    bool IsSkeletalMeshVisible(EABImageViewMode InView) const;
    
    UFUNCTION(BlueprintPure)
    bool IsShowingUndistorted(EABImageViewMode InView) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowingSingleView() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShowingCurves(EABImageViewMode InView) const;
    
    UFUNCTION(BlueprintPure)
    bool IsShowingControlVertices(EABImageViewMode InView) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFootageVisible(EABImageViewMode InView);
    
    UFUNCTION(BlueprintPure)
    bool IsDepthMeshVisible(EABImageViewMode InView) const;
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EViewModeIndex> GetViewModeIndex(EABImageViewMode InView);
    
    UFUNCTION(BlueprintCallable)
    float GetEV100(EABImageViewMode InView);
    
};

