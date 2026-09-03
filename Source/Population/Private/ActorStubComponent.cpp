#include "ActorStubComponent.h"

UActorStubComponent::UActorStubComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Stub = NULL;
    this->System = NULL;
}

void UActorStubComponent::OnNewAssignmentNeeded() {
}

UActorStub* UActorStubComponent::GetStub() const {
    return NULL;
}


