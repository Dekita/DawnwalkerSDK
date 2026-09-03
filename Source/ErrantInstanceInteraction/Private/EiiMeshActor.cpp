#include "EiiMeshActor.h"
#include "Net/UnrealNetwork.h"

AEiiMeshActor::AEiiMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MeshAsset = NULL;
}

void AEiiMeshActor::SetMeshAsset_Implementation(UStaticMesh* InMeshAsset) {
}

void AEiiMeshActor::OnMeshAssetChangedOrReplicated() {
}

void AEiiMeshActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEiiMeshActor, MeshAsset);
}


