#include "DogwoodUIBlueprintFunctionLibrary.h"

UDogwoodUIBlueprintFunctionLibrary::UDogwoodUIBlueprintFunctionLibrary() {
}

void UDogwoodUIBlueprintFunctionLibrary::StopFade(const UObject* WorldContextObject) {
}

void UDogwoodUIBlueprintFunctionLibrary::StartFade(const UObject* WorldContextObject, float ToAlpha, float duration, FLinearColor Color, bool bHoldWhenFinished) {
}

UPaperSprite* UDogwoodUIBlueprintFunctionLibrary::SpriteReference(UPaperSprite* InSprite) {
    return NULL;
}

void UDogwoodUIBlueprintFunctionLibrary::SetManualFade(const UObject* WorldContextObject, float InFadeAmount, FLinearColor Color) {
}

bool UDogwoodUIBlueprintFunctionLibrary::IsWidgetVisibleInHierarchy(const UWidget* InWidget) {
    return false;
}

bool UDogwoodUIBlueprintFunctionLibrary::IsSimulatedGamepadClick(const UWidget* InContextWidget) {
    return false;
}

bool UDogwoodUIBlueprintFunctionLibrary::IsFullyContainedIn(UWidget* Contained, UWidget* Container) {
    return false;
}

bool UDogwoodUIBlueprintFunctionLibrary::IsFocusEventCausedByNavigation(const FFocusEvent& InEvent) {
    return false;
}

bool UDogwoodUIBlueprintFunctionLibrary::IsFocusEventCausedByMouse(const FFocusEvent& InEvent) {
    return false;
}

UWidget* UDogwoodUIBlueprintFunctionLibrary::GetWidgetFromName(const UUserWidget* StartingWidget, const FName& Name) {
    return NULL;
}

float UDogwoodUIBlueprintFunctionLibrary::GetRadialEntryBoxElementAngle(UDynamicEntryBox* DynamicEntryBox, int32 EntryIndex, float StartingAngleOffset) {
    return 0.0f;
}

void UDogwoodUIBlueprintFunctionLibrary::GetAtlasSpriteUV(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, FVector2D& StartUV, FVector2D& SizeUV) {
}

UTexture* UDogwoodUIBlueprintFunctionLibrary::GetAtlasSpriteTexture(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion) {
    return NULL;
}

FVector2D UDogwoodUIBlueprintFunctionLibrary::GetAtlasSpriteSize(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion) {
    return FVector2D{};
}

void UDogwoodUIBlueprintFunctionLibrary::GenerateTextSections(const FString& Text, const FSlateFontInfo& FontInfo, const float Scale, const FVector2D FirstPageSize, const FVector2D NewPageSize, TArray<FString>& OutTextSections) {
}

void UDogwoodUIBlueprintFunctionLibrary::CompileImageForEditor(UTexture2D* ImageTexture) {
}


