#include "KiBLIIFunctionLibrary.h"

UKiBLIIFunctionLibrary::UKiBLIIFunctionLibrary() {
}

FKeyEvent UKiBLIIFunctionLibrary::RemapKeyEvent_SystemToQwerty(const FKeyEvent& KeyEvent) {
    return FKeyEvent{};
}

FKeyEvent UKiBLIIFunctionLibrary::RemapKeyEvent_QwertyToSystem(const FKeyEvent& KeyEvent) {
    return FKeyEvent{};
}

FKey UKiBLIIFunctionLibrary::RemapKey_QwertyToSystem(FKey Key) {
    return FKey{};
}

FString UKiBLIIFunctionLibrary::GetKeyboardLayoutsChars() {
    return TEXT("");
}

FString UKiBLIIFunctionLibrary::GetKeyboardLayoutId() {
    return TEXT("");
}


