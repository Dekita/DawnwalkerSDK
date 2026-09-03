#include "CinematicCameraShake.h"
#include "PersistentPerlinNoiseCameraShakePattern.h"

UCinematicCameraShake::UCinematicCameraShake(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_RootShakePattern = GetClass()->FindPropertyByName("RootShakePattern");
    (*p_RootShakePattern->ContainerPtrToValuePtr<UCameraShakePattern*>(this)) = CreateDefaultSubobject<UPersistentPerlinNoiseCameraShakePattern>(TEXT("RootShakePattern"));
}


