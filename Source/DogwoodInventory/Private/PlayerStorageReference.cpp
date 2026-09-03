#include "PlayerStorageReference.h"
#include "ESpecialInventoryType.h"

APlayerStorageReference::APlayerStorageReference(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = ESpecialInventoryType::PlayerStorage;
}


