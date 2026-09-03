#include "RWAudioListenerEditor.h"
#include "RWAudioComponent.h"

ARWAudioListenerEditor::ARWAudioListenerEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URWAudioComponent>(TEXT("RWListenerComponentEditor"));
    this->ListenerComponent = (URWAudioComponent*)RootComponent;
}


