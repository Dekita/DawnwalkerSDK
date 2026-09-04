#include "RebelBlueprintFunctionLibrary.h"

URebelBlueprintFunctionLibrary::URebelBlueprintFunctionLibrary() {
}

void URebelBlueprintFunctionLibrary::SetInterfaceScale(float CustomUIScale) {
}

bool URebelBlueprintFunctionLibrary::IsTest() {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsSubscribedFreeWeekend() {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsSubscribedDLC(const FString& InDlcTitleId) {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsShipping() {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsPIE(const UObject* InWorldContextObject) {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsGame(const UObject* InWorldContextObject) {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsEditor() {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsDevelopment() {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsDebug() {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsCurrentXboxSeriesPlatformType(ERebelXboxSeriesConsoleType InXboxSeriesPlatformType) {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsCurrentPS5PlatformType(ERebelPS5ConsoleType InPS5PlatformType) {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsCurrentPlatformType(ERebelPlatformType InPlatformType) {
    return false;
}

bool URebelBlueprintFunctionLibrary::IsCompiledWithEditor() {
    return false;
}

ERebelSKURegion URebelBlueprintFunctionLibrary::GetSKURegion() {
    return ERebelSKURegion::Invalid;
}

float URebelBlueprintFunctionLibrary::GetRHIFrameTime() {
    return 0.0f;
}

float URebelBlueprintFunctionLibrary::GetRenderFrameTime() {
    return 0.0f;
}

float URebelBlueprintFunctionLibrary::GetGPUFrameTime() {
    return 0.0f;
}

FString URebelBlueprintFunctionLibrary::GetGeoLocationCountryCode() {
    return TEXT("");
}

float URebelBlueprintFunctionLibrary::GetGameFrameTime() {
    return 0.0f;
}

FText URebelBlueprintFunctionLibrary::GetDisplayProjectVersion() {
    return FText::GetEmpty();
}

FText URebelBlueprintFunctionLibrary::GetDisplayProjectChangelist() {
    return FText::GetEmpty();
}

ERebelXboxSeriesConsoleType URebelBlueprintFunctionLibrary::GetCurrentXboxSeriesPlatformType() {
    return ERebelXboxSeriesConsoleType::Invalid;
}

FString URebelBlueprintFunctionLibrary::GetCurrentTitleID() {
    return TEXT("");
}

ERebelPS5ConsoleType URebelBlueprintFunctionLibrary::GetCurrentPS5PlatformType() {
    return ERebelPS5ConsoleType::Invalid;
}

ERebelPlatformType URebelBlueprintFunctionLibrary::GetCurrentPlatformType() {
    return ERebelPlatformType::Invalid;
}


