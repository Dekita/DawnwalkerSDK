#include "FlowNode.h"

UFlowNode::UFlowNode() {
    this->GraphNode = NULL;
    this->AllowedSignalModes.AddDefaulted(3);
    this->SignalMode = EFlowSignalMode::Enabled;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ActivationState = EFlowNodeState::NeverActivated;
    this->bAmbiguousConnectedFinishNode = false;
}

void UFlowNode::TriggerOutputPin(const FFlowOutputPinHandle Pin, const bool bFinish, const EFlowPinActivationType ActivationType) {
}

void UFlowNode::TriggerOutput(const FName& PinName, const bool bFinish, const EFlowPinActivationType ActivationType) {
}

void UFlowNode::TriggerFirstOutput(const bool bFinish) {
}

void UFlowNode::SaveInstance(FFlowNodeSaveData& NodeRecord) {
}

void UFlowNode::OnSave_Implementation() {
}

void UFlowNode::OnPassThrough_Implementation() {
}

void UFlowNode::OnLoad_Implementation() {
}

void UFlowNode::LogWarning(const FString& Message) {
}

void UFlowNode::LogNote(const FString& Message) {
}

void UFlowNode::LogError(const FString& Message, const EFlowOnScreenMessageType OnScreenMessageType) {
}

void UFlowNode::LoadInstance(const FFlowNodeSaveData& NodeRecord) {
}

















bool UFlowNode::IsOutputConnected(const FName& PinName) const {
    return false;
}

bool UFlowNode::IsInputConnected(const FName& PinName) const {
    return false;
}

FString UFlowNode::GetProgressAsString(float Value) {
    return TEXT("");
}

TArray<FName> UFlowNode::GetOutputNames() const {
    return TArray<FName>();
}

FString UFlowNode::GetNotifyTagsDescription(const FGameplayTagContainer& Tags) {
    return TEXT("");
}

TArray<FName> UFlowNode::GetInputNames() const {
    return TArray<FName>();
}

FString UFlowNode::GetIdentityTagsDescription(const FGameplayTagContainer& Tags) {
    return TEXT("");
}

FString UFlowNode::GetIdentityTagDescription(const FGameplayTag& Tag) {
    return TEXT("");
}

UFlowSubsystem* UFlowNode::GetFlowSubsystem() const {
    return NULL;
}

UFlowAsset* UFlowNode::GetFlowAsset() const {
    return NULL;
}

TSet<UFlowNode*> UFlowNode::GetConnectedNodes() const {
    return TSet<UFlowNode*>();
}

FString UFlowNode::GetClassDescription(const UClass* Class) {
    return TEXT("");
}

void UFlowNode::Finish() {
}


