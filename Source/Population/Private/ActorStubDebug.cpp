#include "ActorStubDebug.h"

UActorStubDebug::UActorStubDebug() {
    this->bShowLocation = false;
}

TArray<UActorStubDebugLogLine*> UActorStubDebug::GetLogLines() const {
    return TArray<UActorStubDebugLogLine*>();
}


