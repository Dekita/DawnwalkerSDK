#include "ReductionSettings.h"

FReductionSettings::FReductionSettings() {
    this->ReductionTargetTriangleRatioEnabled = false;
    this->ReductionTargetTriangleRatio = 0.00f;
    this->ReductionTargetTriangleCountEnabled = false;
    this->ReductionTargetTriangleCount = 0;
    this->ReductionTargetMaxDeviationEnabled = false;
    this->ReductionTargetMaxDeviation = 0.00f;
    this->ReductionTargetOnScreenSizeEnabled = false;
    this->ReductionTargetOnScreenSize = 0;
    this->ReductionPerformanceMode = EReductionPerformanceMode::AllFeatures;
    this->ReductionTargetStopCondition = EReductionTargetStopCondition::Any;
    this->ReductionHeuristics = EReductionHeuristics::Fast;
    this->GeometryImportance = 0.00f;
    this->MaterialImportance = 0.00f;
    this->TextureImportance = 0.00f;
    this->ShadingImportance = 0.00f;
    this->GroupImportance = 0.00f;
    this->VertexColorImportance = 0.00f;
    this->EdgeSetImportance = 0.00f;
    this->SkinningImportance = 0.00f;
    this->OutwardMoveMultiplier = 0.00f;
    this->InwardMoveMultiplier = 0.00f;
    this->LimitMaxEdgeLength = false;
    this->MaxEdgeLength = 0.00f;
    this->KeepSymmetry = false;
    this->UseSymmetryQuadRetriangulator = false;
    this->UseAutomaticSymmetryDetection = false;
    this->SymmetryDetectionTolerance = 0.00f;
    this->SymmetryAxis = ESymmetryAxis::X;
    this->SymmetryOffset = 0.00f;
    this->CreateGeomorphGeometry = false;
    this->GenerateGeomorphData = false;
    this->DataCreationPreferences = EDataCreationPreferences::OnlyUseOriginalData;
    this->UseHighQualityNormalCalculation = false;
    this->LockGeometricBorder = false;
    this->MergeGeometries = false;
    this->AllowDegenerateTexCoords = false;
    this->ProcessSelectionSetID = 0;
    this->KeepUnprocessedSceneMeshes = false;
    this->PreserveQuadFlags = false;
}

