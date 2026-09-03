#include "LootBagSubsystem.h"

ULootBagSubsystem::ULootBagSubsystem() {
    this->Config = NULL;
    this->LootBagClass = NULL;
}

void ULootBagSubsystem::OnLootBagActorEndPlay(AActor* SourceInventoryOwner, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


