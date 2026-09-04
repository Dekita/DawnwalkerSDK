#include "FlowAsset.h"
#include "FlowComponent.h"
#include "Templates/SubclassOf.h"

UFlowAsset::UFlowAsset() {
    this->bWorldBound = true;
    this->TemplateAsset = NULL;
    this->ExpectedOwnerClass = UFlowComponent::StaticClass();
}

AActor* UFlowAsset::TryFindActorOwner() const {
    return NULL;
}

FFlowAssetSaveData UFlowAsset::SaveInstance(TArray<FFlowAssetSaveData>& SavedFlowInstances) {
    return FFlowAssetSaveData{};
}

void UFlowAsset::OnSave_Implementation() {
}

void UFlowAsset::OnLoad_Implementation() {
}

void UFlowAsset::LoadInstance(const FFlowAssetSaveData& AssetRecord) {
}

bool UFlowAsset::IsBoundToWorld_Implementation() {
    return false;
}

bool UFlowAsset::IsActive() const {
    return false;
}

TArray<UFlowNode*> UFlowAsset::GetRecordedNodes() const {
    return TArray<UFlowNode*>();
}

UObject* UFlowAsset::GetOwner() const {
    return NULL;
}

TArray<UFlowNode*> UFlowAsset::GetNodesInExecutionOrder(UFlowNode* FirstIteratedNode, const TSubclassOf<UFlowNode> FlowNodeClass) {
    return TArray<UFlowNode*>();
}

UFlowNode* UFlowAsset::GetDefaultEntryNode() const {
    return NULL;
}

TArray<UFlowNode*> UFlowAsset::GetActiveNodes() const {
    return TArray<UFlowNode*>();
}


