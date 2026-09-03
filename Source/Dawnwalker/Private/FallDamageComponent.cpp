#include "FallDamageComponent.h"

UFallDamageComponent::UFallDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FallDamageConfig = NULL;
}

void UFallDamageComponent::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}


