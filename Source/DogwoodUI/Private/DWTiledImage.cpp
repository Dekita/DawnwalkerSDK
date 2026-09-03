#include "DWTiledImage.h"

UDWTiledImage::UDWTiledImage() {
    this->MaxZoom = 2.00f;
    this->MinZoom = 1.00f;
    this->ControllerStickDeadZone = 0.10f;
    this->GamepadMovementSpeed = 400.00f;
    this->GamepadZoomSpeed = 400.00f;
    this->SizeBox = NULL;
    this->TileGrid = NULL;
}

void UDWTiledImage::ZoomImage(float Value) {
}

void UDWTiledImage::SetOriginalSize(FVector2D Size) {
}

void UDWTiledImage::SetImagePosition(FVector2D NewPosition) {
}

void UDWTiledImage::SetAndLoadTiles(const TArray<TSoftObjectPtr<UTexture2D>>& NewTiles) {
}

void UDWTiledImage::MoveImage(FVector2D Delta) {
}

void UDWTiledImage::LoadTiles() {
}

FVector2D UDWTiledImage::GetImagePosition() {
    return FVector2D{};
}

void UDWTiledImage::ClearTiles() {
}


