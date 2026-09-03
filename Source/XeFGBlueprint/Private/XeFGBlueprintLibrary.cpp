#include "XeFGBlueprintLibrary.h"

UXeFGBlueprintLibrary::UXeFGBlueprintLibrary() {
}

void UXeFGBlueprintLibrary::SetXeFGUICompositionState(EXeFGUICompositionState State) {
}

void UXeFGBlueprintLibrary::SetXeFGMode(EXeFGMode Mode) {
}

bool UXeFGBlueprintLibrary::IsXeFGSupported() {
    return false;
}

bool UXeFGBlueprintLibrary::IfRelaunchRequiredByXeFG() {
    return false;
}

EXeFGUICompositionState UXeFGBlueprintLibrary::GetXeFGUICompositionState() {
    return EXeFGUICompositionState::Disabled;
}

EXeFGMode UXeFGBlueprintLibrary::GetXeFGMode() {
    return EXeFGMode::Off;
}

TArray<EXeFGMode> UXeFGBlueprintLibrary::GetSupportedXeFGModes() {
    return TArray<EXeFGMode>();
}


