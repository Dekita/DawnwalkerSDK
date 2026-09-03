#include "DawnwalkerTransportActor.h"
#include "Components/SceneComponent.h"
#include "PersistencyComponent.h"

ADawnwalkerTransportActor::ADawnwalkerTransportActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Definition = NULL;
    this->PersistencyComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("Persistency"));
    this->GroupFormation = NULL;
    this->TransportSubsystem = NULL;
    this->PersistencyComponent->SetupAttachment(RootComponent);
}

void ADawnwalkerTransportActor::SetEnabled(const bool bState) {
}

void ADawnwalkerTransportActor::SetDefeated(const bool bState) {
}

void ADawnwalkerTransportActor::SetActive(const bool bState) {
}



bool ADawnwalkerTransportActor::IsEnabled() {
    return false;
}

bool ADawnwalkerTransportActor::IsDefeated() {
    return false;
}

bool ADawnwalkerTransportActor::IsActive() {
    return false;
}

FOnTransportStopped ADawnwalkerTransportActor::GetOnTransportStopped() {
    return {};
}

FOnTransportSpawned ADawnwalkerTransportActor::GetOnTransportSpawned() {
    return {};
}

FOnTransportResumed ADawnwalkerTransportActor::GetOnTransportResumed() {
    return {};
}

FOnTransportPlayerLeftGuardArea ADawnwalkerTransportActor::GetOnTransportPlayerLeftGuardArea() {
    return {};
}

FOnTransportPlayerEnterGuardArea ADawnwalkerTransportActor::GetOnTransportPlayerEnterGuardArea() {
    return {};
}

FOnTransportPawnKilled ADawnwalkerTransportActor::GetOnTransportPawnKilled() {
    return {};
}

FOnTransportDespawned ADawnwalkerTransportActor::GetOnTransportDespawned() {
    return {};
}

FOnTransportDefeated ADawnwalkerTransportActor::GetOnTransportDefeated() {
    return {};
}

FOnTransportDeactivated ADawnwalkerTransportActor::GetOnTransportDeactivated() {
    return {};
}

FOnTransportCombatStopped ADawnwalkerTransportActor::GetOnTransportCombatStopped() {
    return {};
}

FOnTransportCombatStarted ADawnwalkerTransportActor::GetOnTransportCombatStarted() {
    return {};
}

FOnTransportActivated ADawnwalkerTransportActor::GetOnTransportActivated() {
    return {};
}


