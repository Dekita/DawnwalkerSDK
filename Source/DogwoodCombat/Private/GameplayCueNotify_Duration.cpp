#include "GameplayCueNotify_Duration.h"
#include "Components/SceneComponent.h"

AGameplayCueNotify_Duration::AGameplayCueNotify_Duration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bAutoDestroyOnRemove = true;
    this->bAllowMultipleWhileActiveEvents = false;
    this->DefaultBoneForVfxSpawn = TEXT("Root");
    this->DurationEffectComponent = NULL;
    this->DurationEffect = NULL;
    this->DurationEffectStartDelay = 0.00f;
    this->bDetachFromBone = false;
    this->DefaultBoneForRemovalVfxSpawn = TEXT("Root");
    this->RemovalEffect = NULL;
    this->TimeBeforeEndToFireRemovalEffect = 0.00f;
    this->bWasRemovalEffectFired = false;
}

void AGameplayCueNotify_Duration::UnbindFromAttributeChange(AActor* Target) {
}

FVector AGameplayCueNotify_Duration::GetUpdatedPosition(FVector& StartLocation, FVector& EndLocation, float ElapsedTime, float TravelTime, float ArcHeight, float Exponent, float ArcWidth) {
    return FVector{};
}

FActiveGameplayEffectHandle AGameplayCueNotify_Duration::GetEffectHandle(AActor* MyTarget, const FGameplayCueParameters& Parameters) {
    return FActiveGameplayEffectHandle{};
}


void AGameplayCueNotify_Duration::BindToAttributeChange(AActor* Target) {
}


