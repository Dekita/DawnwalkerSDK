#include "DoubleDoor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

ADoubleDoor::ADoubleDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SecondWingDoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("SecondWingTrigger"));
    this->SecondInvisibleWallForCombat = CreateDefaultSubobject<UBoxComponent>(TEXT("SecondInvisibleWallForCombat"));
    this->SecondWingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SecondWingMesh"));
    this->SecondInvisibleWallForCombat->SetupAttachment(RootComponent);
    this->SecondWingDoorTrigger->SetupAttachment(SecondWingMesh);
    this->SecondWingMesh->SetupAttachment(RootComponent);
}


