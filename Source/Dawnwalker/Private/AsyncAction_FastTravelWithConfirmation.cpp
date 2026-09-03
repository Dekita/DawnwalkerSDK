#include "AsyncAction_FastTravelWithConfirmation.h"

UAsyncAction_FastTravelWithConfirmation::UAsyncAction_FastTravelWithConfirmation() {
    this->WorldContextObject = NULL;
    this->Descriptor = NULL;
}

void UAsyncAction_FastTravelWithConfirmation::OnLoadingScreenStateChanged(ELoadingScreenState State) {
}

UAsyncAction_FastTravelWithConfirmation* UAsyncAction_FastTravelWithConfirmation::FastTravelWithConfirmation(UObject* InWorldContextObject, const FMappinInstanceId& TargetMapPin, const FText& Title, const FText& Message) {
    return NULL;
}


