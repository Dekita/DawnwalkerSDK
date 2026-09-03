#include "MetaHumanIdentityFace.h"
#include "Components/SkeletalMeshComponent.h"
#include "MetaHumanTemplateMesh.h"
#include "MetaHumanTemplateMeshComponent.h"

UMetaHumanIdentityFace::UMetaHumanIdentityFace() {
    this->TemplateMeshComponent = CreateDefaultSubobject<UMetaHumanTemplateMeshComponent>(TEXT("Template Mesh Component"));
    this->RigComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Rig Component"));
    this->bIsConformed = false;
    this->bIsAutoRigged = false;
    this->bHasFittedEyes = false;
    this->DNAScale = 0.00f;
    this->bSkipDiagnostics = false;
    this->MaximumScaleDifferenceFromAverage = 25.00f;
    this->MinimumDepthMapFaceCoverage = 80.00f;
    this->MinimumDepthMapFaceWidth = 120.00f;
    this->ConformalMeshComponent = CreateDefaultSubobject<UMetaHumanTemplateMesh>(TEXT("Conformal Mesh Component"));
}

bool UMetaHumanIdentityFace::RemovePose(UMetaHumanIdentityPose* InPose) {
    return false;
}

bool UMetaHumanIdentityFace::IsConformalRigValid() const {
    return false;
}

bool UMetaHumanIdentityFace::HasPredictiveSolvers() const {
    return false;
}

bool UMetaHumanIdentityFace::HasDNABuffer() const {
    return false;
}

TArray<UMetaHumanIdentityPose*> UMetaHumanIdentityFace::GetPoses() const {
    return TArray<UMetaHumanIdentityPose*>();
}

UMetaHumanIdentityPose* UMetaHumanIdentityFace::FindPoseByType(EIdentityPoseType InPoseType) const {
    return NULL;
}

void UMetaHumanIdentityFace::ExportTemplateMesh(const FString& InPath, const FString& InAssetName) {
}

EIdentityErrorCode UMetaHumanIdentityFace::Conform(EConformType InConformType) {
    return EIdentityErrorCode::None;
}

void UMetaHumanIdentityFace::AddPoseOfType(EIdentityPoseType InPoseType, UMetaHumanIdentityPose* InPose) {
}


