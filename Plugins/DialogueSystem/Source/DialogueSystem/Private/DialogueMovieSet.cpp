#include "DialogueMovieSet.h"
#include "Components/SceneComponent.h"

ADialogueMovieSet::ADialogueMovieSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
    this->DefaultSceneComponent = (USceneComponent*)RootComponent;
}

FGuid ADialogueMovieSet::GetSlotGuid(const FString& DisplayName) const {
    return FGuid{};
}

TArray<FString> ADialogueMovieSet::GetSlotDisplayNames() const {
    return TArray<FString>();
}

FString ADialogueMovieSet::GetSlotDisplayName(const FGuid& Guid) const {
    return TEXT("");
}


