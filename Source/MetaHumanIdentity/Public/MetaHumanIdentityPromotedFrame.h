#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "DepthMapDiagnosticsResult.h"
#include "MetaHumanIdentityPromotedFrame.generated.h"

class UMetaHumanContourData;
class UMetaHumanFaceContourTrackerAsset;

UCLASS(Abstract, Blueprintable)
class METAHUMANIDENTITY_API UMetaHumanIdentityPromotedFrame : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform HeadAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FrameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsHeadAlignmentSet: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseToSolve: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNavigationLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTrackOnChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFrontView: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanFaceContourTrackerAsset* ContourTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanContourData* ContourData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDepthMapDiagnosticsResult DepthMapDiagnostics;
    
    UMetaHumanIdentityPromotedFrame();

    UFUNCTION(BlueprintCallable)
    void ToggleNavigationLocked();
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationLocked(bool bIsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackingOnChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrackingManually() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavigationLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FrameContoursContainActiveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DiagnosticsIndicatesProcessingIssue(float InMinimumDepthMapFaceCoverage, float InMinimumDepthMapFaceWidth, FText& OutDiagnosticsWarningMessage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTrack() const;
    
};

