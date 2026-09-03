#include "PopulationArea.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "PersistencyComponent.h"

APopulationArea::APopulationArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoLODGeneration = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->OuterCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("OuterCollisionComp"));
    this->InnerCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("InnerCollisionComp"));
    this->PersistencyComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("PersistencyComp"));
    this->bUseAttachedGuardArea = false;
    this->GeneratedDataTable = NULL;
    this->SpawnActivator = NULL;
    this->DespawnActivator = NULL;
    this->ExtensionExecutionContext = NULL;
    this->InnerCollisionComponent->SetupAttachment(RootComponent);
    this->OuterCollisionComponent->SetupAttachment(RootComponent);
    this->PersistencyComponent->SetupAttachment(RootComponent);
}

void APopulationArea::OnEndOverlapOuterBox(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex) {
}

void APopulationArea::OnBeginOverlapOuterBox(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bFromSweep, const FHitResult& InSweepResult) {
}

bool APopulationArea::GetRandomLocationInsideInnerBoxComponent(const AActor* TestActor, FVector& Location, const FRotator& Rotation, EKeepDistanceToPoints KeepDistance, float Distance) const {
    return false;
}

TArray<FString> APopulationArea::GetAPOrderOptions() const {
    return TArray<FString>();
}


