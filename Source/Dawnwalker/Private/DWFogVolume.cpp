#include "DWFogVolume.h"

ADWFogVolume::ADWFogVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TraceChannel = TraceTypeQuery1;
    this->VolumeComponent = NULL;
    this->HeightMapRenderTarget = NULL;
    this->BrushMaterialInterface = NULL;
    this->BrushMaterialDmi = NULL;
    this->FogTraceMaterialInterface = NULL;
    this->FogNoToDMaterialInterface = NULL;
    this->FogTraceDmi = NULL;
}

void ADWFogVolume::TestLog(const FString& log, FVector CurrentPosition) {
}

void ADWFogVolume::Initialize(float FogOffset, float Contrast, float Coverage, float Density, float DetailScale, float Distortion, float DistortionScale, float Height, float Scale, int32 RenderTargetSize, UStaticMeshComponent* Volume, FVector WindDirection, UTexture* MaskTexture, bool bTrace, bool bUseTimeOfDay, FVector ColorA, FVector ColorB) {
}

TEnumAsByte<ETraceTypeQuery> ADWFogVolume::GetTraceChannel() {
    return TraceTypeQuery1;
}

void ADWFogVolume::EndGenerator() {
}


