#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EIdentityErrorCode.h"
#include "EConformType.h"
#include "EIdentityPoseType.h"
#include "MetaHumanIdentityPart.h"
#include "MetaHumanIdentityFace.generated.h"

class UMetaHumanFaceFittingSolver;
class UMetaHumanIdentityPose;
class UMetaHumanTemplateMesh;
class UMetaHumanTemplateMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class METAHUMANIDENTITY_API UMetaHumanIdentityFace : public UMetaHumanIdentityPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanFaceFittingSolver* DefaultSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMetaHumanTemplateMeshComponent* TemplateMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RigComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsConformed: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    uint8 bIsAutoRigged: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasFittedEyes: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FTransform DNAToScanTransform;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    FVector DNAPivot;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    float DNAScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipDiagnostics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumScaleDifferenceFromAverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDepthMapFaceCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDepthMapFaceWidth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawDNABuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawDeltaDNABuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawCombinedDNABuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<uint8> DNABuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<uint8> PCARig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<uint8> BrowsBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<uint8> PredictiveSolvers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    TArray<uint8> PredictiveWithoutTeethSolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMetaHumanIdentityPose*> Poses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMetaHumanTemplateMesh* ConformalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ConformalVertsLeftEyeRigSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ConformalVertsRightEyeRigSpace;
    
public:
    UMetaHumanIdentityFace();

    UFUNCTION(BlueprintCallable)
    bool RemovePose(UMetaHumanIdentityPose* InPose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConformalRigValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPredictiveSolvers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDNABuffer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMetaHumanIdentityPose*> GetPoses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMetaHumanIdentityPose* FindPoseByType(EIdentityPoseType InPoseType) const;
    
    UFUNCTION(BlueprintCallable)
    void ExportTemplateMesh(const FString& InPath, const FString& InAssetName);
    
    UFUNCTION(BlueprintCallable)
    EIdentityErrorCode Conform(EConformType InConformType);
    
    UFUNCTION(BlueprintCallable)
    void AddPoseOfType(EIdentityPoseType InPoseType, UMetaHumanIdentityPose* InPose);
    
};

