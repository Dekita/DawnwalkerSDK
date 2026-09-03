#include "WwiseExtensionsSettings.h"

UWwiseExtensionsSettings::UWwiseExtensionsSettings() {
    this->ListenerCameraToPlayerPosition = 0.00f;
    this->GlobalListenerDampingInS = 0.10f;
    this->CinematicsListenerDampingInS = 0.10f;
    this->MultiObstructionRayPresets.AddDefaulted(5);
    this->ObstructionTransitionTime = 0.50f;
    this->EnableAcoustics = true;
    this->NumberOfReflections = 2;
    this->NumberOfSphereRaycasts = 96;
    this->NumberOfRaycastsPerFrame = 4;
    this->SphereRaycastLength = 7500.00f;
    this->CeilingRaycastLength = 10000.00f;
    this->CeilingRaycastIndoorThreshold = 6000.00f;
    this->AmountOfIncludedFloor = 0.20f;
    this->HorizontalBias = 0.30f;
    this->RayWeightVerticalBias = 2.00f;
    this->IndoorDeterminatonThreshold = 0.04f;
    this->bCentreSegmentsAlongAxis = true;
    this->ReflectorSmoothingSpeed = 0.25f;
    this->NumberOfPlayerFacingQuads = 5;
    this->PlayerFacingQuadWidth = 500.00f;
    this->PlayerFacingQuadHeight = 500.00f;
    this->PlayerFacingReflectorAlgorithm = EReflectorAlgorithm::MeanProjection;
    this->PlayerFacingQuadsUpdateInterval = 0.25f;
    this->NumberOfSurfaceAlignedQuads = 3;
    this->SurfaceAlignedQuadWidth = 2000.00f;
    this->SurfaceAlignedQuadHeight = 750.00f;
    this->SurfaceAlignedReflectorAlgorithm = EReflectorAlgorithm::MeanProjection;
    this->OutdoorOcclusionMaxDistance = 35000.00f;
    this->AutoReverbPresets.AddDefaulted(11);
    this->LateReverbTransitionTime = 1.50f;
    this->AutoReverbsIgnoreDistance = 150;
}


