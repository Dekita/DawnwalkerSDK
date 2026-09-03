#include "ActorStub.h"

UActorStub::UActorStub() {
    this->Debug = NULL;
}

bool UActorStub::IsResolved() const {
    return false;
}

bool UActorStub::IsReady() const {
    return false;
}

UActionSlotComponent* UActorStub::GetSlot() const {
    return NULL;
}

FRotator UActorStub::GetRotation() const {
    return FRotator{};
}

APawn* UActorStub::GetPawn() const {
    return NULL;
}

FVector UActorStub::GetLocation() const {
    return FVector{};
}

FString UActorStub::GetDebugStringEx() const {
    return TEXT("");
}

FString UActorStub::GetDebugString() const {
    return TEXT("");
}

UActorStubDebug* UActorStub::GetDebug() const {
    return NULL;
}

ACommunityController* UActorStub::GetController() const {
    return NULL;
}


