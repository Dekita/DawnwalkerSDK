#include "ActionSlotComponent.h"

UActionSlotComponent::UActionSlotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoadedMontage = NULL;
    this->PreviewMeshComponent = NULL;
}

FName UActionSlotComponent::GetWorkCategory() const {
    return NAME_None;
}

UAnimMontage* UActionSlotComponent::GetLoadedAnimMontage() const {
    return NULL;
}


