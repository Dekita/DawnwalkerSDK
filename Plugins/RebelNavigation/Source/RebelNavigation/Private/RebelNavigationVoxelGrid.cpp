#include "RebelNavigationVoxelGrid.h"

ARebelNavigationVoxelGrid::ARebelNavigationVoxelGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CellSize = 19.00f;
    this->CellPadding = 1;
    this->VoxelHeight = 20.00f;
    this->ChunkSize = 2584.00f;
    this->ExportScale = 2;
    this->bEnableNavigationDataExport = true;
}

bool ARebelNavigationVoxelGrid::SetLayerEnabledAtRuntime(const FGuid& LayerId, bool bEnabled) {
    return false;
}

void ARebelNavigationVoxelGrid::HandleDataLayerInstanceRuntimeStateChanged(const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State) {
}


