#include "SimpleSummon.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

ASimpleSummon::ASimpleSummon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->Root = (USceneComponent*)RootComponent;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
    this->SkeletalMesh->SetupAttachment(RootComponent);
}




