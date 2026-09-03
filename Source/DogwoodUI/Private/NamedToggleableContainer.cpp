#include "NamedToggleableContainer.h"
#include "Components/SlateWrapperTypes.h"

UNamedToggleableContainer::UNamedToggleableContainer() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->bShown = true;
}

void UNamedToggleableContainer::SetShown(bool bInShouldBeShown) {
}

void UNamedToggleableContainer::OnShownStateChanged_Implementation(bool bIsShown) {
}

bool UNamedToggleableContainer::IsShown() const {
    return false;
}


