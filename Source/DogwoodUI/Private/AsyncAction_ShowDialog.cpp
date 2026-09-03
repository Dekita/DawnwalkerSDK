#include "AsyncAction_ShowDialog.h"

UAsyncAction_ShowDialog::UAsyncAction_ShowDialog() {
    this->WorldContextObject = NULL;
    this->Descriptor = NULL;
}

UAsyncAction_ShowDialog* UAsyncAction_ShowDialog::ShowYesNoDialog(UObject* InWorldContextObject, FText Title, FText Message) {
    return NULL;
}

UAsyncAction_ShowDialog* UAsyncAction_ShowDialog::ShowCustomDialog(UObject* InWorldContextObject, FText Title, FText Message, const TMap<EDialogResult, FText>& Options) {
    return NULL;
}

UAsyncAction_ShowDialog* UAsyncAction_ShowDialog::ShowConfirmDialog(UObject* InWorldContextObject, FText Title, FText Message) {
    return NULL;
}

UAsyncAction_ShowDialog* UAsyncAction_ShowDialog::ShowConfirmCancelDialogWithTimer(UObject* InWorldContextObject, FText Title, FText Message, FText TimeoutMessage, int32 SecondsToClose) {
    return NULL;
}

UAsyncAction_ShowDialog* UAsyncAction_ShowDialog::ShowConfirmCancelDialog(UObject* InWorldContextObject, FText Title, FText Message) {
    return NULL;
}


