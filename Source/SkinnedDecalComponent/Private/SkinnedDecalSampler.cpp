#include "SkinnedDecalSampler.h"

USkinnedDecalSampler::USkinnedDecalSampler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = NULL;
    this->MaxDecals = 100;
    this->MinDecalDistance = 10.00f;
    this->BlendMode = Overlay;
    this->LayerIndex = -1;
    this->Association = GlobalParameter;
    this->AdditionalData = SpawnTime;
    this->EnableSaveGame = false;
    this->OverlayBlendMaterialDynamic = NULL;
    this->DataTarget = NULL;
}

void USkinnedDecalSampler::UpdateInstance(USkinnedDecalInstance* Instance) {
}

void USkinnedDecalSampler::UpdateAllDecals() {
}

void USkinnedDecalSampler::SpawnDecalFromData(FSkinnedDecalData Data) {
}

int32 USkinnedDecalSampler::SpawnDecal(FVector Location, const FQuat Rotation, FName BoneName, float Size, int32 SubUV, int32 Index, bool bNeverFadeAway) {
    return 0;
}

void USkinnedDecalSampler::SetupMaterials() {
}

void USkinnedDecalSampler::SetupComponentMaterials(USkinnedMeshComponent* Component) {
}

void USkinnedDecalSampler::SetSamplerState(FSkinnedDecalSamplerState State) {
}

void USkinnedDecalSampler::SetMeshComponent(USkinnedMeshComponent* MeshComponent, bool Child) {
}

void USkinnedDecalSampler::SaveSampler(const FString& SlotName, const int32 UserIndex) {
}

void USkinnedDecalSampler::RemoveDecal(const int32 Index) {
}

void USkinnedDecalSampler::LoadSampler(const FString& SlotName, const int32 UserIndex) {
}

FSkinnedDecalSamplerState USkinnedDecalSampler::GetSamplerState() {
    return FSkinnedDecalSamplerState{};
}

UTextureRenderTarget2D* USkinnedDecalSampler::GetDataTarget() {
    return NULL;
}

void USkinnedDecalSampler::CloneDecals(USkinnedDecalSampler* Source) {
}

void USkinnedDecalSampler::ClearAllDecals() {
}

void USkinnedDecalSampler::AutoSetup() {
}


