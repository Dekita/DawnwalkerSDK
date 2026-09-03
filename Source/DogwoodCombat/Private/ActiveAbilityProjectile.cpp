#include "ActiveAbilityProjectile.h"

UActiveAbilityProjectile::UActiveAbilityProjectile() {
    this->SpawnedProjectileComponent = NULL;
    this->SourceActor = NULL;
    this->DestinationActor = NULL;
    this->TravelTime = 1.00f;
    this->ElapsedTime = 0.00f;
    this->ArcHeight = 0.00f;
    this->ArcWidth = 0.00f;
    this->Exponent = 0.00f;
    this->bIsFired = false;
    this->bIsBeam = false;
}

bool UActiveAbilityProjectile::UpdateProjectilePosition(float DelaTime) {
    return false;
}

void UActiveAbilityProjectile::InitializeProjectile(UNiagaraSystem* NiagaraSystem, AActor* Source, AActor* Destination, float InTravelTime, float InArcHeight, float InArcWidth, float InExponent, bool bInIsBeam, FName InLocationSocketName) {
}

FVector UActiveAbilityProjectile::GetUpdatedPosition(FVector& StartLocation, FVector& EndLocation, float NewElapsedTime, float NewTravelTime, float NewArcHeight, float NewExponent, float NewArcWidth) {
    return FVector{};
}

void UActiveAbilityProjectile::FireWithDelay(float Delay) {
}

void UActiveAbilityProjectile::Fire() {
}

void UActiveAbilityProjectile::DeinitializeProjectile() {
}


