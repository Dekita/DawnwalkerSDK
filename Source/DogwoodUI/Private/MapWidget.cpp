#include "MapWidget.h"

UMapWidget::UMapWidget() {
    this->FastTravelEnabled = false;
    this->SelectedMappin = NULL;
    this->MappinClass = NULL;
    this->SnapToMappinRadius = 40.00f;
    this->CustomMappin = NULL;
    this->MinDistrictLabelVisibilityZoom = 1.00f;
    this->ControllerStickDeadZone = 0.10f;
    this->GamepadMovementSpeed = 800.00f;
    this->GamepadZoomSpeed = 0.05f;
    this->MovementAcceleration = 0.50f;
    this->MaxMovementSpeed = 16.00f;
    this->IsUserMappinInRange = false;
    this->InitialNewMappinAnimationDelay = 0.50f;
    this->EachNewMappinAnimationDelay = 0.20f;
    this->SelectedLabel = NULL;
}

void UMapWidget::Zoom(float ZoomSpeed, FVector2D ZoomPoint) {
}



FVector2D UMapWidget::TrySelectMappinClosestToCursor() {
    return FVector2D{};
}

void UMapWidget::SetMapSize(FVector2D Size) {
}

void UMapWidget::SetMapPosition(FVector2D position) {
}

FMappinInstanceId UMapWidget::RefreshMappinsAndGetPlayerId() {
    return FMappinInstanceId{};
}

void UMapWidget::RefreshLabelPositions() {
}


void UMapWidget::PrepareMappin(const FMappinInstanceId& MappinInstanceId) {
}



FVector2D UMapWidget::LocalToMapPosition(FVector2D LocalPosition) {
    return FVector2D{};
}

void UMapWidget::LoadMapTiles() {
}

int32 UMapWidget::GetTooltipZOrder() {
    return 0;
}


FVector2D UMapWidget::GetMapVisibleSize() const {
    return FVector2D{};
}


FVector2D UMapWidget::GetMapSize() const {
    return FVector2D{};
}


FVector2D UMapWidget::GetMapCachedHalfSize() const {
    return FVector2D{};
}


FVector2D UMapWidget::GetGamepadCursorMapPosition() {
    return FVector2D{};
}

float UMapWidget::GetCurrentZoom() {
    return 0.0f;
}

void UMapWidget::FillMapTiles() {
}

void UMapWidget::CreateLabels() {
}

void UMapWidget::ClearMapTiles() {
}


