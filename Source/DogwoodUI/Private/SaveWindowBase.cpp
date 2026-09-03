#include "SaveWindowBase.h"

USaveWindowBase::USaveWindowBase() {
    this->SaveButtonWidgetClass = NULL;
    this->ActiveType = ESaveLoadWindowType::Save;
    this->SaveListView = NULL;
    this->NewSaveButtonObject = NULL;
}

void USaveWindowBase::SetType(ESaveLoadWindowType InType) {
}

void USaveWindowBase::RequestOverwriteSave(const FString& SaveName) {
}

void USaveWindowBase::RequestNewSave() {
}

void USaveWindowBase::RequestLoadSave(const FString& SaveName) {
}

void USaveWindowBase::RequestDeleteSave(const FString& SaveName) {
}

bool USaveWindowBase::IsSavingEnabled() {
    return false;
}

UWidget* USaveWindowBase::GetEntryWidgetFromItem(USaveUIObject* Item) {
    return NULL;
}




