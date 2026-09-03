#include "RebelInputDisplayFunctionLibrary.h"

URebelInputDisplayFunctionLibrary::URebelInputDisplayFunctionLibrary() {
}

FSlateBrush URebelInputDisplayFunctionLibrary::GetUIActionIcon(const UObject* InWorldContext, const TArray<FDataTableRowHandle>& InputActions, const int32 DirectionMask, bool bCheckAllAvailableSets) {
    return FSlateBrush{};
}

FSlateBrush URebelInputDisplayFunctionLibrary::GetKeyIcon(const UObject* InWorldContext, const FKey& Key, const int32 DirectionMask, bool bCheckAllAvailableSets) {
    return FSlateBrush{};
}

FSlateBrush URebelInputDisplayFunctionLibrary::GetInputActionIcon(const UObject* InWorldContext, const UInputAction* InputAction, const int32 DirectionMask, bool bCheckAllAvailableSets) {
    return FSlateBrush{};
}

TArray<FSlateBrush> URebelInputDisplayFunctionLibrary::GetAllInputActionIconsInCurrentSet(const UObject* InWorldContext, const UInputAction* InputAction, const int32 DirectionMask) {
    return TArray<FSlateBrush>();
}


