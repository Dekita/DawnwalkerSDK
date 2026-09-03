#include "QuestTriggerComponent.h"

UQuestTriggerComponent::UQuestTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableOnStart = true;
    this->OverlapLimit = 0;
    this->bEnabled = false;
    this->OverlapCount = 0;
}

void UQuestTriggerComponent::OnEndOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex) {
}

void UQuestTriggerComponent::OnEndNotice(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex) {
}

void UQuestTriggerComponent::OnBeginOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bFromSweep, const FHitResult& InSweepResult) {
}

void UQuestTriggerComponent::OnBeginNotice(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bFromSweep, const FHitResult& InSweepResult) {
}

void UQuestTriggerComponent::Enable() {
}

void UQuestTriggerComponent::Disable() {
}


