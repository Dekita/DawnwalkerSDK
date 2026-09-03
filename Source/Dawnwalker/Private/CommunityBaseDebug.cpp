#include "CommunityBaseDebug.h"

UCommunityBaseDebug::UCommunityBaseDebug() {
    this->bExpanded = false;
    this->bSelected = false;
}

FString UCommunityBaseDebug::GetDebugString() const {
    return TEXT("");
}

TArray<UActorStub*> UCommunityBaseDebug::GetAllActorStubs() {
    return TArray<UActorStub*>();
}

bool UCommunityBaseDebug::CanActivate() const {
    return false;
}


