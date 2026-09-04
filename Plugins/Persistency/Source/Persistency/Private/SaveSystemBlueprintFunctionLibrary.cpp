#include "SaveSystemBlueprintFunctionLibrary.h"

USaveSystemBlueprintFunctionLibrary::USaveSystemBlueprintFunctionLibrary() {
}

bool USaveSystemBlueprintFunctionLibrary::TryQuicksave() {
    return false;
}

bool USaveSystemBlueprintFunctionLibrary::TryQuickload() {
    return false;
}

bool USaveSystemBlueprintFunctionLibrary::LoadLastSave() {
    return false;
}

bool USaveSystemBlueprintFunctionLibrary::IsSavingLocked() {
    return false;
}

bool USaveSystemBlueprintFunctionLibrary::HasSavesToLoad(bool bForceNoSaveListValidate) {
    return false;
}


