#include "FlowComponent.h"
#include "Net/UnrealNetwork.h"

UFlowComponent::UFlowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootFlow = NULL;
    this->bAutoStartRootFlow = true;
    this->RootFlowMode = EFlowNetMode::Authority;
    this->bAllowMultipleInstances = true;
}

void UFlowComponent::StartRootFlow() {
}

void UFlowComponent::SaveRootFlow(TArray<FFlowAssetSaveData>& SavedFlowInstances) {
}

FFlowComponentSaveData UFlowComponent::SaveInstance() {
    return FFlowComponentSaveData{};
}

void UFlowComponent::RemoveIdentityTags(FGameplayTagContainer Tags, const EFlowNetMode NetMode) {
}

void UFlowComponent::RemoveIdentityTag(const FGameplayTag Tag, const EFlowNetMode NetMode) {
}

void UFlowComponent::OnSave_Implementation() {
}

void UFlowComponent::OnRep_SentNotifyTags() {
}

void UFlowComponent::OnRep_RemovedIdentityTags() {
}

void UFlowComponent::OnRep_NotifyTagsFromGraph() {
}

void UFlowComponent::OnRep_NotifyTagsFromAnotherComponent() {
}

void UFlowComponent::OnRep_AddedIdentityTags() {
}

void UFlowComponent::OnLoad_Implementation() {
}

void UFlowComponent::NotifyGraph(const FGameplayTag NotifyTag, const EFlowNetMode NetMode) {
}

void UFlowComponent::NotifyActor(const FGameplayTag ActorTag, const FGameplayTag NotifyTag, const EFlowNetMode NetMode) {
}

void UFlowComponent::LogError(const FString& Message, const EFlowOnScreenMessageType OnScreenMessageType) const {
}

void UFlowComponent::LoadRootFlow() {
}

bool UFlowComponent::LoadInstance() {
    return false;
}

TSet<UFlowAsset*> UFlowComponent::GetRootInstances(const UObject* Owner) const {
    return TSet<UFlowAsset*>();
}

UFlowAsset* UFlowComponent::GetRootFlowInstance() const {
    return NULL;
}

void UFlowComponent::FinishRootFlow(UFlowAsset* TemplateAsset, const EFlowFinishPolicy FinishPolicy) {
}

void UFlowComponent::BulkNotifyGraph(const FGameplayTagContainer NotifyTags, const EFlowNetMode NetMode) {
}


void UFlowComponent::AddIdentityTags(FGameplayTagContainer Tags, const EFlowNetMode NetMode) {
}

void UFlowComponent::AddIdentityTag(const FGameplayTag Tag, const EFlowNetMode NetMode) {
}

void UFlowComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFlowComponent, AddedIdentityTags);
    DOREPLIFETIME(UFlowComponent, RemovedIdentityTags);
    DOREPLIFETIME(UFlowComponent, RecentlySentNotifyTags);
    DOREPLIFETIME(UFlowComponent, NotifyTagsFromGraph);
    DOREPLIFETIME(UFlowComponent, NotifyTagsFromAnotherComponent);
}


