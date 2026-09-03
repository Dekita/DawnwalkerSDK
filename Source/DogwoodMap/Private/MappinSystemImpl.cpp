#include "MappinSystemImpl.h"

UMappinSystemImpl::UMappinSystemImpl() {
    this->QuestMappinCache = NULL;
    this->QuestStartMappinCache = NULL;
    this->OpenWorldMappinCache = NULL;
    this->FastTravelDestinationCache = NULL;
    this->CommunityObjectCache = NULL;
    this->MapLabels = NULL;
    this->UnknownMappinIcon = NULL;
}

void UMappinSystemImpl::ToggleDisplayingCompletedMappins() {
}

bool UMappinSystemImpl::ShouldHideCompletedMappins() const {
    return false;
}

void UMappinSystemImpl::SetMapWasOpenedFromTower(bool Value) {
}

void UMappinSystemImpl::SetMappinStateInCustomFilter(EMappinState MappinState, bool Filtered) {
}

void UMappinSystemImpl::SetMappinFilteredInCustomFilter(EMappinType MappinType, bool Filtered) {
}

void UMappinSystemImpl::SetCurrentZoom(float NewZoom) {
}

void UMappinSystemImpl::SetCurrentFilterIndex(int32 Value) {
}

void UMappinSystemImpl::RunPathToMappinRequests() {
}

bool UMappinSystemImpl::IsMappinStateFilteredInCustomFilter(EMappinState MappinState) {
    return false;
}

bool UMappinSystemImpl::IsMappinFilteredInCustomFilter(EMappinType MappinType) {
    return false;
}

bool UMappinSystemImpl::IsCourtMappin(FMappinInstanceId MappinInstanceId) {
    return false;
}

bool UMappinSystemImpl::HasCustomStateTisplay(EMappinType MappinType, EMappinState MappinState) {
    return false;
}

TArray<FMappinInstanceId> UMappinSystemImpl::GetTrackedQuestMapPins() const {
    return TArray<FMappinInstanceId>();
}

bool UMappinSystemImpl::GetMapWasOpenedFromTower() {
    return false;
}

FText UMappinSystemImpl::GetMappinTypeLongDescription(EMappinType Type) {
    return FText::GetEmpty();
}

UQuest* UMappinSystemImpl::GetMappinQuest(FMappinInstanceId MappinInstanceId) {
    return NULL;
}

UPaperSprite* UMappinSystemImpl::GetMappinImage(FMappinInstanceId MappinInstanceId, EMappinState MappinState) {
    return NULL;
}

int32 UMappinSystemImpl::GetCurrentFilterIndex() {
    return 0;
}


