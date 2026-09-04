#include "FlowSubsystem.h"
#include "Templates/SubclassOf.h"

UFlowSubsystem::UFlowSubsystem() {
    this->LoadedSaveGame = NULL;
}

void UFlowSubsystem::StartRootFlow(UObject* Owner, UFlowAsset* FlowAsset, const bool bAllowMultipleInstances) {
}

void UFlowSubsystem::OnGameSaved(UFlowSaveGame* SaveGame) {
}

void UFlowSubsystem::OnGameLoaded(UFlowSaveGame* SaveGame) {
}

void UFlowSubsystem::LoadSubFlow(UFlowNode_SubGraph* SubGraphNode, const FString& SavedAssetInstanceName) {
}

void UFlowSubsystem::LoadRootFlow(UObject* Owner, UFlowAsset* FlowAsset, const FString& SavedAssetInstanceName) {
}

TSet<UFlowAsset*> UFlowSubsystem::GetRootInstancesByOwner(const UObject* Owner) const {
    return TSet<UFlowAsset*>();
}

TMap<UObject*, UFlowAsset*> UFlowSubsystem::GetRootInstances() const {
    return TMap<UObject*, UFlowAsset*>();
}

UFlowAsset* UFlowSubsystem::GetRootFlow(const UObject* Owner) const {
    return NULL;
}

UFlowSaveGame* UFlowSubsystem::GetLoadedSaveGame() const {
    return NULL;
}

TMap<UFlowNode_SubGraph*, UFlowAsset*> UFlowSubsystem::GetInstancedSubFlows() const {
    return TMap<UFlowNode_SubGraph*, UFlowAsset*>();
}

TSet<UFlowComponent*> UFlowSubsystem::GetFlowComponentsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<UFlowComponent> ComponentClass, const bool bExactMatch) const {
    return TSet<UFlowComponent*>();
}

TSet<UFlowComponent*> UFlowSubsystem::GetFlowComponentsByTag(const FGameplayTag Tag, const TSubclassOf<UFlowComponent> ComponentClass, const bool bExactMatch) const {
    return TSet<UFlowComponent*>();
}

TSet<AActor*> UFlowSubsystem::GetFlowActorsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<AActor> ActorClass, const bool bExactMatch) const {
    return TSet<AActor*>();
}

TSet<AActor*> UFlowSubsystem::GetFlowActorsByTag(const FGameplayTag Tag, const TSubclassOf<AActor> ActorClass, const bool bExactMatch) const {
    return TSet<AActor*>();
}

TMap<AActor*, UFlowComponent*> UFlowSubsystem::GetFlowActorsAndComponentsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<AActor> ActorClass, const bool bExactMatch) const {
    return TMap<AActor*, UFlowComponent*>();
}

TMap<AActor*, UFlowComponent*> UFlowSubsystem::GetFlowActorsAndComponentsByTag(const FGameplayTag Tag, const TSubclassOf<AActor> ActorClass, const bool bExactMatch) const {
    return TMap<AActor*, UFlowComponent*>();
}

void UFlowSubsystem::FinishRootFlow(UObject* Owner, UFlowAsset* TemplateAsset, const EFlowFinishPolicy FinishPolicy) {
}

void UFlowSubsystem::FinishAllRootFlows(UObject* Owner, const EFlowFinishPolicy FinishPolicy) {
}

void UFlowSubsystem::AbortActiveFlows() {
}


