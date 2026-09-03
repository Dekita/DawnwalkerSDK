#include "DWExpandableAreaWithButtonBase.h"

UDWExpandableAreaWithButtonBase::UDWExpandableAreaWithButtonBase() : UUserWidget(FObjectInitializer::Get()) {
    this->ExpandableArea = NULL;
    this->Button = NULL;
    this->ExpansionIndicatorContainer = NULL;
    this->ExpansionIndicator = NULL;
    this->IndentSpacer = NULL;
    this->ContentSlot = NULL;
    this->ExpandedIndicator = NULL;
    this->CollapsedIndicator = NULL;
    this->bCanBeExpandedByUser = true;
    this->bIsExpanded = true;
    this->bShouldExpandOnFirstFocusClick = true;
    this->IndentSize = 15.00f;
    this->ButtonStyle = NULL;
    this->bIsSelectable = true;
    this->bShouldSelectUponReceivingFocus = true;
    this->bIsHeaderButtonFocusable = true;
}

void UDWExpandableAreaWithButtonBase::SetExpanded(bool bInExpanded) {
}

void UDWExpandableAreaWithButtonBase::SetCanBeExpandedByUser(bool bInCanBeExpanded) {
}


