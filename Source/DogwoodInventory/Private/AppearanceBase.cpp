#include "AppearanceBase.h"

UAppearanceBase::UAppearanceBase() {
    this->BodyPreset = NULL;
}

bool UAppearanceBase::DoesAppearanceTableContainMesh(UDataTable* Table, EAppearanceSlot Slot, const FAppearanceMesh& Mesh, FName& OutName) {
    return false;
}


