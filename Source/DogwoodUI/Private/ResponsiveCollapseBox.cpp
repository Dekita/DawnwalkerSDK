#include "ResponsiveCollapseBox.h"
#include "Components/SlateWrapperTypes.h"

UResponsiveCollapseBox::UResponsiveCollapseBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
}

bool UResponsiveCollapseBox::DoesChildFit() const {
    return false;
}


