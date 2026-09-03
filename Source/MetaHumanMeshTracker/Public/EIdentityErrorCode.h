#pragma once
#include "CoreMinimal.h"
#include "EIdentityErrorCode.generated.h"

UENUM(BlueprintType)
enum class EIdentityErrorCode : uint8 {
    None,
    MLRig,
    CreateRigFromDNA,
    LoadBrows,
    NoDNA,
    NoTemplate,
    CreateDebugFolder,
    CalculatePCAModel,
    Initialization,
    CameraParameters,
    ScanInput,
    DepthInput,
    TeethSource,
    FitRigid,
    FitPCA,
    FitTeethFailed,
    TeethDepthDelta,
    UpdateRigWithTeeth,
    InvalidDNA,
    ApplyDeltaDNA,
    RefineTeeth,
    ApplyScaleToDNA,
    NoPart,
    InCompatibleDNA,
    CaptureDataInvalid,
    SolveFailed,
    BrowsFailed,
    NoPose,
    FitEyesFailed,
    BadInputMeshTopology,
};

