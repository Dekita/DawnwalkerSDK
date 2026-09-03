#include "TiledInventoryView.h"

UTiledInventoryView::UTiledInventoryView() : UUserWidget(FObjectInitializer::Get()) {
    this->InventoryTileView = NULL;
    this->TargetInventoryComponent = NULL;
    this->InventoryViewType = EInventoryViewType::Default;
    this->ItemSortMode = EItemSortMode::New;
}

void UTiledInventoryView::StoreSelectedIndex() {
}

void UTiledInventoryView::Setup(UInventoryComponent* InInventoryComponent, UCommonButtonGroupBase* InButtonGroup) {
}

void UTiledInventoryView::SetSortingMode(EItemSortMode InSortMode) {
}

void UTiledInventoryView::SetItemFilterHandler(TScriptInterface<IInventoryListItemFilterHandler> Handler) {
}

void UTiledInventoryView::SetItemFilter(const FItemFilterTypeRow& InFilterType) {
}

void UTiledInventoryView::SelectFirstItemIfPresent() {
}

bool UTiledInventoryView::IsDisplayingAnyActualItems() const {
    return false;
}

FItemFilterTypeRow UTiledInventoryView::GetItemFilter() const {
    return FItemFilterTypeRow{};
}

void UTiledInventoryView::ClearSelectedIndex() {
}


